TEMPLATE = app
TARGET = kaos
INCLUDEPATH += . ../include

# Make Qt4 qmake behavior matching Qt5 qmake
CONFIG += depend_includepath

greaterThan(QT_MAJOR_VERSION, 4) {
	QT += widgets
}

# Input
HEADERS += \
	keymonitor.h \
	keystrokes.h \
	../include/eev.h \
	../include/keysyms.h
SOURCES += \
	main.cpp \
	keymonitor.cpp \
	keystrokes.cpp \
	../common/keysyms.c
