TEMPLATE = app
TARGET = multiview
DEPENDPATH += .
INCLUDEPATH += .

QT += widgets
CONFIG += console

# Input
HEADERS += createModel.h
SOURCES +=  createModel.cpp \
    multiview.cpp
