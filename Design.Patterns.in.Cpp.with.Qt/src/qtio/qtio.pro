TEMPLATE = app

CONFIG += debug console
DEFINES += QT_NOTHREAD_DEBUG

CONFIG -= moc
INCLUDEPATH += . ../qstd
DEPENDPATH += ../qstd
VPATH = ../qstd

# Input
SOURCES += qtio-demo.cpp qstd.cpp 
HEADERS += qstd.h


