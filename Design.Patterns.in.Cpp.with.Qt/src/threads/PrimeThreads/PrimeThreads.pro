include (../../common.pri)
CONFIG += debug

QT += concurrent widgets

HEADERS += \
    primeserver.h \
    primethread.h \
    primegui.h \
    isprime.h

SOURCES += \
    primeserver.cpp \
    main.cpp \
    primethread.cpp \
    primegui.cpp \
    isprime.cpp

FORMS += \
    primegui.ui
