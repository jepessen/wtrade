#-------------------------------------------------
#
# Project created by QtCreator 2015-07-11T17:16:05
#
#-------------------------------------------------

include(../common.pri)

QT = gui
QT += network

TARGET = yahoodataconnection
TEMPLATE = lib

INCLUDEPATH += ../

DEFINES += YAHOODATACONNECTION_LIBRARY

SOURCES += \
	YahooDataConnection.cpp \
	YahooNetwork.cpp

HEADERS +=\
	yahoodataconnection_global.h \
	YahooDataConnection.h \
	Strings.h \
	YahooNetwork.h

release:DESTDIR = ../build/release/plugins
debug:DESTDIR = ../build/debug/plugins

LIBS += -L$$DESTDIR/.. -ltradedataconnection -ltrade

unix {
	target.path = /usr/lib
	INSTALLS += target
}

DISTFILES += \
	yahoodataconnection.json \
	yql/GetMarketList.yql

RESOURCES += \
	yqlqueries.qrc
