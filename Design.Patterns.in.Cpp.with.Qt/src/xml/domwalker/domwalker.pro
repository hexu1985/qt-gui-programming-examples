# include common qmake settings
include (../../common.pri)

# this project depends on libdataobjects:
LIBS += -ldataobjects 

# this directory contains the libraries:
LIBS += -L$$(CPPLIBS)/dataobjects

# Search here for headers:
INCLUDEPATH += . $$(CPPLIBS)/dataobjects

QT += xml gui widgets

CONFIG += console
TEMPLATE = app

SOURCES += main.cpp slacker.cpp domwalker.cpp xmltreemodel.cpp
HEADERS += slacker.h domwalker.h xmltreemodel.h