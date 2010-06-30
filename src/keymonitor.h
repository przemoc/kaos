/* Key Activity On-Screen display - monitor class header
 *
 * (C) Copyright 2010 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#ifndef EEVKEYMONITOR_H_
#define EEVKEYMONITOR_H_

#include <QObject>

class QFile;
class QSocketNotifier;

class EevKeyMonitor : public QObject
{
	Q_OBJECT

public:
	explicit EevKeyMonitor(QObject *parent = 0);
	virtual ~EevKeyMonitor();
	bool init(QString debugfsDir);

signals:
	void keyPressed(unsigned code);
	void keyReleased(unsigned code);

private slots:
	void readInputEvents();

private:
	EevKeyMonitor(const EevKeyMonitor&);
	EevKeyMonitor& operator=(const EevKeyMonitor&);

	static const char* eevFileName;

	QFile *file;
	QSocketNotifier *notifier;
};

#endif // EEVKEYMONITOR_H_
