#-------------------------------------------------
#
# Project created by QtCreator 2015-09-09T18:42:08
#
#-------------------------------------------------


QT       += core
QT       += network

QT       -= gui

CONFIG   += console
CONFIG 	 += c++11
CONFIG   -= app_bundle
CONFIG   += static

TEMPLATE = app

DESTDIR = bin
VERSION = 0.0.0.0

INCLUDEPATH += /home/alexey/workprjs/ositransport
INCLUDEPATH += $(JENKINS_HOME)/jobs/ositransport/workspace/include

SOURCES += ositransport-test.cpp

HEADERS += ositransport-test.h

CONFIG (debug, debug|release){
    OBJECTS_DIR = build/debug
	LIBS += -L/home/alexey/workprjs/ositransport/bin -L$(JENKINS_HOME)/jobs/ositransport/workspace/bin -lositransportd -lcppunit -lgcov
	DEFINES += DEBUG
	TARGET = ositransport-testd	
} else {
    OBJECTS_DIR = build/release
	LIBS += -L/home/alexey/workprjs/ositransport/bin -L$(JENKINS_HOME)/jobs/ositransport/workspace/bin -lositransport -lcppunit -lgcov
	TARGET = ositransport-test
}

CONFIG += debug_and_release build_all
