/* Key Activity On-Screen display - Evdev Events Voyeur kernel module
 *
 * (C) Copyright 2010 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#include <linux/module.h>
#include <linux/kprobes.h>
#include <linux/input.h>
#include <linux/relay.h>
#include <linux/debugfs.h>

#define EEV_PREFIX "eev: "

static struct rchan *chan;

static const size_t subbuf_size __initconst = 3 * sizeof (int);
static const size_t n_subbufs   __initconst = 32;

static struct file_operations relay_file_operations_w_owner;

static struct dentry *create_buf_file_handler(const char *filename, struct dentry *parent, int mode, struct rchan_buf *buf, int *is_global)
{
	static struct dentry *file;

	file = debugfs_create_file(filename, S_IRUGO, parent, buf, &relay_file_operations_w_owner);
	*is_global = 1;

	return file;
}

static int remove_buf_file_handler(struct dentry *dentry)
{
	debugfs_remove(dentry);

	return 0;
}

static struct rchan_callbacks relayfs_callbacks =
{
	.create_buf_file = create_buf_file_handler,
	.remove_buf_file = remove_buf_file_handler,
};

static void jinput_pass_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
{
	int event_parms[3] = { type, code, value };

	relay_write(chan, event_parms, 3 * sizeof (int));

	jprobe_return();
}

static struct jprobe evdev_jprobe = {
	.entry = jinput_pass_event,
	.kp = {
		.symbol_name	= "input_pass_event",
	},
};

static int __init eev_init(void)
{
	int ret;

	relay_file_operations_w_owner = relay_file_operations;
	relay_file_operations_w_owner.owner = THIS_MODULE;

	chan = relay_open("eev", NULL, subbuf_size, n_subbufs, &relayfs_callbacks, NULL);
	if (!chan) {
		printk(KERN_INFO EEV_PREFIX "relay channel creation failed\n");
		return -ENOMEM;
	}

	ret = register_jprobe(&evdev_jprobe);
	if (ret < 0) {
		printk(KERN_INFO EEV_PREFIX "jprobe registering failed, returned %d\n", ret);
		relay_close(chan);
		return -1;
	}
	printk(KERN_INFO EEV_PREFIX "jprobe at %p registered\n", evdev_jprobe.kp.addr);
	return 0;
}

static void __exit eev_exit(void)
{
	unregister_jprobe(&evdev_jprobe);
	printk(KERN_INFO EEV_PREFIX "jprobe at %p unregistered\n", evdev_jprobe.kp.addr);
	if (chan)
		relay_close(chan);
}

module_init(eev_init)
module_exit(eev_exit)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Przemyslaw Pawelczyk");
MODULE_DESCRIPTION("Evdev Events Voyeur");
