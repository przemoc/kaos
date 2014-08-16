/* Key Activity On-Screen display - entry point
 *
 * (C) Copyright 2010-2014 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#include "keystrokes.h"
#include "keymonitor.h"

#include <QApplication>


const char* defaultDebugfsDir = "/sys/kernel/debug";


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	EevKeyMonitor keyMonitor;
	KeyStrokes keyStrokes;

	keyStrokes.connect(&keyMonitor, SIGNAL(keyPressed(unsigned)),
	                   SLOT(downKey(unsigned)));
	keyStrokes.connect(&keyMonitor, SIGNAL(keyReleased(unsigned)),
	                   SLOT(upKey(unsigned)));

	if (!keyMonitor.init(argc > 1 ? argv[1] : defaultDebugfsDir))
		return 1;

	keyStrokes.show();

	return app.exec();
}
