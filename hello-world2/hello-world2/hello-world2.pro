#-------------------------------------------------
#
# Project created by QtCreator 2015-01-13T13:48:49
#
#-------------------------------------------------

QT       += dbus core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hello-world2
TEMPLATE = app


SOURCES += main.cpp\
    client.cpp \
    server.cpp

HEADERS  += \
    client.h \
    server.h

FORMS    += \
    client.ui \
    server.ui
