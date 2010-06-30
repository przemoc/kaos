/* Key Activity On-Screen display - visual class header
 *
 * (C) Copyright 2010 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#ifndef KEYSTROKES_H
#define KEYSTROKES_H

#include <QWidget>

template <class T>
class QLinkedList;

typedef struct KeyInfo {
	unsigned code;
	bool down;
} KeyInfo;

class KeyStrokes : public QWidget
{
	Q_OBJECT

public:
	explicit KeyStrokes(QWidget *parent = 0);
	virtual ~KeyStrokes();
	virtual QSize sizeHint() const;

protected:
	virtual void paintEvent(QPaintEvent *);

public slots:
	void upKey(unsigned code);
	void downKey(unsigned code);

private slots:
	void removeKey();

private:
	KeyStrokes(const KeyStrokes&);
	KeyStrokes& operator=(const KeyStrokes&);

	void paintKey(QPainter *painter, QPoint *point, KeyInfo *keyinfo);
	void resizeMe();
	int calcKeyWidth(unsigned code) const;
	int calcWidth() const;
	int calcHeight() const;

	QLinkedList<KeyInfo> *list;
	QLinkedList<unsigned> *removal_list;
};

#endif // KEYSTROKES_H
