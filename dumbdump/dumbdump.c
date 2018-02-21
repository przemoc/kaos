/* Key Activity On-Screen display - Dumb Dump test application
 *
 * (C) Copyright 2010-2014 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#include "siev.h"
#include "sievtypes.h"
#include "keysyms.h"

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <poll.h>
#include <limits.h>
#include <sys/file.h>

#define MAX_SIEV_EVENTS 256


const char *default_debugfs_dir = "/sys/kernel/debug";
const char *siev_file_name = "siev0";


static void
process_data(struct siev_event *ev)
{
	static unsigned count = 0;

	if (ev->type == EV_SYN && count) {
		puts("---");
		count = 0;
		return;
	}
	if (ev->type != EV_KEY || ev->code >= KEYSYMS_COUNT)
		return;

	count++;
	printf("%d (%s_%s) %s\n",
	       ev->value,
	       siev_types[keysyms[ev->code].type],
	       keysyms[ev->code].kname,
	       keysyms[ev->code].name
	      );
}


int
main(int argc, char **argv)
{
	int rc;
	int relay_file;
	struct siev_event buf;
	char siev_file_path[PATH_MAX + 1] = "\0";

	strncat(siev_file_path, argc > 1 ? argv[1] : default_debugfs_dir, PATH_MAX);
	rc = strlen(siev_file_path);
	strncat(siev_file_path + rc, "/", PATH_MAX - rc);
	strncat(siev_file_path + rc + 1, siev_file_name, PATH_MAX - rc - 1);

	relay_file = open(siev_file_path, O_RDONLY);
	if (relay_file < 0) {
		fprintf(stderr, "File %s could not be opened!\n", siev_file_path);
		return 1;
	}
	if (flock(relay_file, LOCK_EX | LOCK_NB) == -1) {
		fprintf(stderr, "File %s is already locked!\n", siev_file_path);
		return 1;
	}

	struct pollfd pollfd = {
		.fd = relay_file,
		.events = POLLIN,
	};

	{
		char tmp[MAX_SIEV_EVENTS * sizeof(struct siev_event)];
		while (read(relay_file, tmp, sizeof(tmp)))
			;
	}

	do {
		rc = poll(&pollfd, 1, -1);
		if (rc == 0) {
			fprintf(stderr, "poll: impossible timeout\n");
			continue;
		}
		if (rc < 0) {
			perror("poll");
			continue;
		}
		while((rc = read(relay_file, &buf, sizeof(struct siev_event))))
			if (rc < 0) {
				perror("read");
				continue;
			} else if (rc > 0) {
				process_data(&buf);
				continue;
			}
	} while (1);

	close(relay_file);
}
