/* Key Activity On-Screen display - monitor class header
 *
 * (C) Copyright 2010-2014 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#ifndef SIEVKEYMONITOR_H_
#define SIEVKEYMONITOR_H_

#include <QObject>


class QFile;
class QSocketNotifier;


class SIEVKeyMonitor : public QObject
{
	Q_OBJECT

public:
	explicit SIEVKeyMonitor(QObject *parent = 0);
	virtual ~SIEVKeyMonitor();
	bool init(QString debugfsDir);

signals:
	void keyPressed(unsigned code);
	void keyReleased(unsigned code);

private slots:
	void readInputEvents();

private:
	SIEVKeyMonitor(const SIEVKeyMonitor&);
	SIEVKeyMonitor& operator=(const SIEVKeyMonitor&);

	static const char* sievFileName;

	QFile *file;
	QSocketNotifier *notifier;
};


#endif // SIEVKEYMONITOR_H_
