/* Key Activity On-Screen display - Shady Input Events Voyeur header
 *
 * (C) Copyright 2010-2014 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#ifndef SIEV_HEADER_
#define SIEV_HEADER_


/* Event type */
enum ev_type {
	EV_SYN = 0x00,
	EV_KEY = 0x01,
	EV_REL = 0x02,
	EV_ABS = 0x03
};


struct siev_event {
	unsigned type;
	unsigned code;
	int value;
} __attribute__ ((packed));


#define KEYSYMS_COUNT 529


#endif /* SIEV_HEADER_ */
