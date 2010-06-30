/* Key Activity On-Screen display - monitor class
 *
 * (C) Copyright 2010 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#include "keymonitor.h"
#include "eev.h"

#include <QDir>
#include <QFile>
#include <QSocketNotifier>

#include <memory>
#include <sys/file.h>

const char* EevKeyMonitor::eevFileName = "eev0";

EevKeyMonitor::EevKeyMonitor(QObject *parent)
	: QObject(parent), file(0), notifier(0)
{
}

EevKeyMonitor::~EevKeyMonitor()
{
	delete file;
	delete notifier;
}

void EevKeyMonitor::readInputEvents()
{
	struct evdev_event ev;
	while (file->read((char *)&ev, sizeof (struct evdev_event))) {
		if (ev.type != EV_KEY || ev.code >= KEYSYMS_COUNT)
			continue;
		if (ev.value == 1)
			emit keyPressed(ev.code);
		else if (ev.value == 0)
			emit keyReleased(ev.code);
	}
}

bool EevKeyMonitor::init(QString debugfsDir)
{
	QDir eevDir(debugfsDir);
	if (!eevDir.exists()) {
		qCritical("Directory %s does not exist!", qPrintable(debugfsDir));
		return false;
	}
	QString eevFilePath = eevDir.absoluteFilePath(eevFileName);
	if (!QFile::exists(eevFilePath)) {
		qCritical("File %s does not exist!", qPrintable(eevFilePath));
		return false;
	}
	std::auto_ptr<QFile> eevFile(new QFile(eevFilePath));
	if (!eevFile->open(QIODevice::ReadOnly)) {
		qCritical("File %s could not be opened!", qPrintable(eevFilePath));
		return false;
	}
	if (flock(eevFile->handle(), LOCK_EX | LOCK_NB) == -1) {
		qCritical("File %s is already locked!\n", qPrintable(eevFilePath));
		return false;
	}
	eevFile->readAll();
	notifier = new QSocketNotifier(eevFile->handle(), QSocketNotifier::Read);
	QObject::connect(notifier, SIGNAL(activated(int)), SLOT(readInputEvents()));
	notifier->setEnabled(true);
	file = eevFile.release();
	return true;
}
