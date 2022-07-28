include (../libs.pri)
TEMPLATE=lib

LIBS += -ldataobjects -L../dataobjects
INCLUDEPATH +=  ../dataobjects 

QT += widgets

# Input
HEADERS += custType.h customer.h customerlist.h  customerfactory.h 
SOURCES += custType.cpp customer.cpp customerlist.cpp customerfactory.cpp 

win32 {
    CONFIG += dll 
    DEFINES += CUSTOMER_DLL
}

