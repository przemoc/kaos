TEMPLATE = app
TARGET =
INCLUDEPATH += . ../include
DEPENDPATH += $$INCLUDEPATH ../common

# Input
HEADERS += \
	keymonitor.h \
	keystrokes.h \
	eev.h \
	keysyms.h
SOURCES += \
	main.cpp \
	keymonitor.cpp \
	keystrokes.cpp \
	keysyms.c
