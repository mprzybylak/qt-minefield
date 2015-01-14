#-------------------------------------------------
#
# Project created by QtCreator 2015-01-14T09:51:31
#
#-------------------------------------------------

QT       += core gui testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = file-server
TEMPLATE = app

SOURCES += main/main.cpp\
        main/gui/serverwidget.cpp \
    main/setup/application/impl/setupserviceimpl.cpp \
    main/setup/domain/Setup/serversetup.cpp \
    test/setup/domain/setup/serversetuptest.cpp \
    main/setup/domain/Setup/illegalserversetupexception.cpp

HEADERS  += main/gui/serverwidget.h \
    main/setup/application/api/SetupService.h \
    main/setup/application/impl/setupserviceimpl.h \
    main/setup/domain/Setup/serversetup.h \
    main/setup/domain/Setup/illegalserversetupexception.h

FORMS    += main/gui/serverwidget.ui
