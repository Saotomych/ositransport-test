#-------------------------------------------------
#
# Project created by QtCreator 2015-09-09T18:42:08
#
#-------------------------------------------------


QT       += core
QT       += network

QT       -= gui

TARGET = ositransport-test
CONFIG   += console
CONFIG 	 += c++11
CONFIG   -= app_bundle
CONFIG   += static

TEMPLATE = app

DESTDIR = bin
VERSION = 0.0.0.0

INCLUDEPATH += /home/alexey/workprjs/ositransport/bin

SOURCES += ositransport-test.cpp

HEADERS += ositransport-test.h

CONFIG (debug, debug|release){
    OBJECTS_DIR = build/debug
	LIBS += -L/home/alexey/workprjs/ositransport/bin -lositransportd -lcppunit -lgcov
} else {
    OBJECTS_DIR = build/release
	LIBS += -L/home/alexey/workprjs/ositransport/bin -lositransport -lcppunit -lgcov
}

CONFIG += debug_and_release build_all
