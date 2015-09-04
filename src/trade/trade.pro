#-------------------------------------------------
#
# Project created by QtCreator 2015-07-10T22:45:45
#
#-------------------------------------------------

include (../common.pri)

QT -= gui

TARGET = trade
TEMPLATE = lib

DEFINES += TRADE_LIBRARY

INCLUDEPATH += ../

SOURCES += trade.cpp \
	Market.cpp

HEADERS += trade.h\
	trade_global.h \
	Market.h

release:DESTDIR = ../build/release
debug:DESTDIR = ../build/debug

unix {
	target.path = /usr/lib
	INSTALLS += target
}
