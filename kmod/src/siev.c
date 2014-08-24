/* Key Activity On-Screen display - Shady Input Events Voyeur kernel module
 *
 * (C) Copyright 2010-2014 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#include <linux/module.h>
#include <linux/kprobes.h>
#include <linux/input.h>
#include <linux/relay.h>
#include <linux/debugfs.h>
#include <linux/types.h>
#include <linux/version.h>

#define SIEV_PREFIX "siev: "


static struct rchan *chan;

static const size_t subbuf_size __initconst = 3 * sizeof(int);
static const size_t n_subbufs   __initconst = 32;

static struct file_operations relay_file_operations_w_owner;


/*
 * umode_t is typedef for unsigned short that was introduced in linux/types.h
 * in v3.3 (0583fcc96b: consolidate umode_t declarations) and started being
 * used in many places, like rchan callback create_buf_file.
 *
 * Using #if for function prototypes is nasty, so let's typedef umode_t in
 * pre-v3.3 kernels to the type used for mode parameter before, which is int.
 */
#if LINUX_VERSION_CODE < KERNEL_VERSION(3,3,0)
typedef int umode_t;
#endif


static struct dentry *
create_buf_file_handler(const char *filename, struct dentry *parent,
                        umode_t mode, struct rchan_buf *buf, int *is_global)
{
	static struct dentry *file;

	file = debugfs_create_file(filename, S_IRUGO, parent, buf,
	                           &relay_file_operations_w_owner);
	*is_global = 1;

	return file;
}


static int
remove_buf_file_handler(struct dentry *dentry)
{
	debugfs_remove(dentry);

	return 0;
}


static struct rchan_callbacks relayfs_callbacks = {
	.create_buf_file = create_buf_file_handler,
	.remove_buf_file = remove_buf_file_handler,
};


static void
siev_jp_input_event(struct input_dev *dev,
                    unsigned int type, unsigned int code, int value)
{
	int event_parms[3] = { type, code, value };

	relay_write(chan, event_parms, 3 * sizeof(int));

	jprobe_return();
}


static void
siev_jp_input_inject_event(struct input_handle *handle,
                           unsigned int type, unsigned int code, int value)
{
	int event_parms[3] = { type, code, value };

	relay_write(chan, event_parms, 3 * sizeof(int));

	jprobe_return();
}


static struct jprobe *siev_jprobes[] = {
	&(struct jprobe){
		.entry = siev_jp_input_event,
		.kp = {
			.symbol_name = "input_event",
		},
	},
	&(struct jprobe){
		.entry = siev_jp_input_inject_event,
		.kp = {
			.symbol_name = "input_inject_event",
		},
	},
};


static int __init
siev_init(void)
{
	int ret;

	relay_file_operations_w_owner = relay_file_operations;
	relay_file_operations_w_owner.owner = THIS_MODULE;

	chan = relay_open("siev", NULL, subbuf_size, n_subbufs, &relayfs_callbacks,
	                  NULL);
	if (!chan) {
		printk(KERN_INFO SIEV_PREFIX
		       "relay channel creation failed\n");
		return -ENOMEM;
	}

	ret = register_jprobes(siev_jprobes, ARRAY_SIZE(siev_jprobes));
	if (ret < 0) {
		printk(KERN_INFO SIEV_PREFIX
		       "jprobes registering failed, returned %d\n",
		       ret);
		relay_close(chan);
		return -1;
	}

	printk(KERN_INFO SIEV_PREFIX
	       "jprobes registered successfully\n");

	return 0;
}


static void __exit
siev_exit(void)
{
	unregister_jprobes(siev_jprobes, ARRAY_SIZE(siev_jprobes));
	printk(KERN_INFO SIEV_PREFIX
	       "jprobes unregistered\n");
	if (chan)
		relay_close(chan);
}


module_init(siev_init)
module_exit(siev_exit)


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Przemyslaw Pawelczyk");
MODULE_DESCRIPTION("Shady Input Events Voyeur");
