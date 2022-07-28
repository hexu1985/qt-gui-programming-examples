include (../../common.pri)

TEMPLATE = app
LIBS += -lcards2 -L$$(CPPLIBS)/cards2
INCLUDEPATH += $$(CPPLIBS)/cards2

QT += widgets
# Input
HEADERS += cardtable.h
SOURCES += stretch.cpp cardtable.cpp
