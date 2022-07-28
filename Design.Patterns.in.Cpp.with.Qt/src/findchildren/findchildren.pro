
include (../common.pri)
LIBS	+= -ldataobjects -L$$(CPPLIBS)/dataobjects 
INCLUDEPATH += $$(CPPLIBS)/dataobjects

CONFIG += console
TEMPLATE = app
INCLUDEPATH += .

# Input
HEADERS += customer.h
SOURCES += findchildren.cpp customer.cpp
