/* Key Activity On-Screen display - Evdev Events Voyeur keysyms header
 *
 * (C) Copyright 2010 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#ifndef KEYSYMS_HEADER_
#define KEYSYMS_HEADER_

/* Input key event type */
enum eev_type {
	/* key */
	EEV_KEY = 0,
	/* button */
	EEV_BTN,
	/* undefined */
	EEV_UND,
	/* reserved */
	EEV_RES
};

struct keysym {
	const enum eev_type type;
	const char *kname;
	const char *name;
};

extern struct keysym keysyms[];

#endif /* KEYSYMS_HEADER_ */
