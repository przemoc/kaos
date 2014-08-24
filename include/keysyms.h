/* Key Activity On-Screen display - Shady Input Events Voyeur keysyms header
 *
 * (C) Copyright 2010-2014 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#ifndef KEYSYMS_HEADER_
#define KEYSYMS_HEADER_


/* Input key event type */
enum siev_type {
	/* key */
	SIEV_KEY = 0,
	/* button */
	SIEV_BTN,
	/* undefined */
	SIEV_UND,
	/* reserved */
	SIEV_RES
};


struct keysym {
	const enum siev_type type;
	const char *kname;
	const char *name;
};


extern struct keysym keysyms[];


#endif /* KEYSYMS_HEADER_ */
