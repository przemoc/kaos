/* Key Activity On-Screen display - Evdev Events Voyeur header
 *
 * (C) Copyright 2010 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#ifndef EEV_HEADER_
#define EEV_HEADER_

/* Event type */
enum ev_type {
	EV_SYN = 0x00,
	EV_KEY = 0x01,
	EV_REL = 0x02,
	EV_ABS = 0x03
};

struct evdev_event {
	unsigned type;
	unsigned code;
	int value;
} __attribute__ ((packed));

#define KEYSYMS_COUNT 529

#endif /* EEV_HEADER_ */
