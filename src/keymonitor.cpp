/* Key Activity On-Screen display - monitor class
 *
 * (C) Copyright 2010-2014 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#include "keymonitor.h"
#include "siev.h"

#include <QDir>
#include <QFile>
#include <QSocketNotifier>

#include <memory>
#include <sys/file.h>
#include <map>


const char* SIEVKeyMonitor::sievFileName = "siev0";


SIEVKeyMonitor::SIEVKeyMonitor(QObject *parent)
	: QObject(parent), file(0), notifier(0)
{
}


SIEVKeyMonitor::~SIEVKeyMonitor()
{
	delete file;
	delete notifier;
}


void
SIEVKeyMonitor::readInputEvents()
{
	static std::map<unsigned, bool> keys;
	struct siev_event ev;

	while (file->read((char *)&ev, sizeof(struct siev_event))) {
		if (ev.type != EV_KEY || ev.code >= KEYSYMS_COUNT)
			continue;

		bool & isPressed = keys[ev.code];

		if (!isPressed && ev.value == 1) {
			isPressed = 1;
			emit keyPressed(ev.code);
		}
		else if (isPressed && ev.value == 0) {
			isPressed = 0;
			emit keyReleased(ev.code);
		}
	}
}


bool
SIEVKeyMonitor::init(QString debugfsDir)
{
	QDir sievDir(debugfsDir);
	if (!sievDir.exists()) {
		qCritical("Directory %s does not exist!", qPrintable(debugfsDir));
		return false;
	}

	QString sievFilePath = sievDir.absoluteFilePath(sievFileName);
	if (!QFile::exists(sievFilePath)) {
		qCritical("File %s does not exist!", qPrintable(sievFilePath));
		return false;
	}

	std::auto_ptr<QFile> sievFile(new QFile(sievFilePath));
	if (!sievFile->open(QIODevice::ReadOnly)) {
		qCritical("File %s could not be opened!", qPrintable(sievFilePath));
		return false;
	}
	if (flock(sievFile->handle(), LOCK_EX | LOCK_NB) == -1) {
		qCritical("File %s is already locked!\n", qPrintable(sievFilePath));
		return false;
	}
	sievFile->readAll();

	notifier = new QSocketNotifier(sievFile->handle(), QSocketNotifier::Read);
	QObject::connect(notifier, SIGNAL(activated(int)), SLOT(readInputEvents()));
	notifier->setEnabled(true);

	file = sievFile.release();

	return true;
}
