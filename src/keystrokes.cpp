/* Key Activity On-Screen display - visual class
 *
 * (C) Copyright 2010 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#include "keystrokes.h"
#include "keysyms.h"

#include <QTimer>

#if QT_VERSION >= 0x50000
# include <QtWidgets>
#else
# include <QtGui>
#endif


KeyStrokes::KeyStrokes(QWidget *parent) :
		QWidget(parent, Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint)
{
	list = new QLinkedList<KeyInfo>();
	removal_list = new QLinkedList<unsigned>();
	QWidget::setAttribute(Qt::WA_OpaquePaintEvent, true);
	QWidget::setFont(QFont("Courier", 13));
	resizeMe();
}

KeyStrokes::~KeyStrokes()
{
	delete list;
	delete removal_list;
}

int KeyStrokes::calcKeyWidth(unsigned code) const
{
	return fontMetrics().width(keysyms[code].name) + 10;
}

int KeyStrokes::calcWidth() const
{
	int size = 0;
	KeyInfo keyinfo;
	Q_FOREACH(keyinfo, *list)
		size += calcKeyWidth(keyinfo.code);
	return size;
}

int KeyStrokes::calcHeight() const
{
	return fontMetrics().height();
}

QSize KeyStrokes::sizeHint() const
{
	return QSize(calcWidth(), calcHeight());
}

void KeyStrokes::paintKey(QPainter *painter, QPoint *point, KeyInfo *keyinfo)
{
	QRect rect;
	rect.setBottomLeft(*point);
	rect.setTopRight(QPoint(point->x() + calcKeyWidth(keyinfo->code) - 1, 0));
	QStyleOptionButton option;
	option.initFrom(this);
	option.text = keysyms[keyinfo->code].name;
	QLinearGradient gradient(rect.topLeft(), rect.bottomRight());
	gradient.setColorAt(keyinfo->down ? 1 : 0, Qt::lightGray);
	gradient.setColorAt(keyinfo->down ? 0 : 1, Qt::darkGray);
	painter->fillRect(rect, QBrush(gradient));
	painter->fillRect(rect.adjusted(3,3,-3,-3), QBrush(keyinfo->down ? Qt::darkGray : Qt::lightGray));
	painter->setPen(QPen(keyinfo->down ? Qt::white : Qt::black));
	painter->drawText(rect, Qt::AlignHCenter | Qt::AlignVCenter, keysyms[keyinfo->code].name);
	*point += QPoint(rect.width(), 0);
}

void KeyStrokes::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	KeyInfo keyinfo;
	QPoint point(0, calcHeight());
	Q_FOREACH(keyinfo, *list)
		paintKey(&painter, &point, &keyinfo);
}

void KeyStrokes::downKey(unsigned code)
{
	KeyInfo keyinfo = { code, true };
	list->append(keyinfo);
	resizeMe();
}

void KeyStrokes::upKey(unsigned code)
{
	QLinkedList<KeyInfo>::iterator it = list->begin();
	while (it != list->end())
		if (it->code == code && it->down == true) {
			it->down = false;
			QWidget::update();
			removal_list->append(code);
			QTimer::singleShot(1000, this, SLOT(removeKey()));
			break;
		} else
			++it;
}

void KeyStrokes::removeKey()
{
	if (removal_list->isEmpty())
		return;

	unsigned code = removal_list->takeFirst();
	QLinkedList<KeyInfo>::iterator it = list->begin();
	while (it != list->end())
		if (it->code == code && it->down == false) {
			list->erase(it);
			resizeMe();
			QWidget::update();
			break;
		} else
			++it;
}

void KeyStrokes::resizeMe()
{
	QRect r(0, 0, calcWidth(), calcHeight());
	if (!r.width())
		QWidget::hide();
	else {
		r.moveTopRight(qApp->desktop()->availableGeometry().topRight());
		QWidget::setGeometry(r);
		QWidget::show();
	}
}
