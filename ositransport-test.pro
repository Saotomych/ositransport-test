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

INCLUDEPATH += ../ositransport
INCLUDEPATH += $(JENKINS_HOME)/jobs/ositransport/workspace

SOURCES += ositransport-test.cpp

HEADERS += ositransport-test.h

unix{
	CONFIG (debug, debug|release){
	    OBJECTS_DIR = build/debug
		LIBS += -L../ositransport/bin -L$(JENKINS_HOME)/jobs/ositransport/workspace/bin -lositransportd -lcppunit -lgcov
		DEFINES += DEBUG
		TARGET = ositransport-testd
		
		QMAKE_CXXFLAGS_RELEASE -= -O
		QMAKE_CXXFLAGS_RELEASE -= -O1
		QMAKE_CXXFLAGS_RELEASE -= -O2
		QMAKE_CXXFLAGS += -O0 -fprofile-arcs -ftest-coverage -fPIC
			
	} else {
	    OBJECTS_DIR = build/release
		LIBS += -L../ositransport/bin -L$(JENKINS_HOME)/jobs/ositransport/workspace/bin -lositransport -lcppunit
		TARGET = ositransport-test
		
		QMAKE_CXXFLAGS_RELEASE += -fPIC
	}
}else{
    TARGET = ositransport-test-notunix
}

CONFIG += debug_and_release build_all
