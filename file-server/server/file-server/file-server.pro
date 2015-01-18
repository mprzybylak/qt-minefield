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
    main/setup/domain/Setup/serversetup.cpp \
    test/setup/domain/setup/serversetuptest.cpp \
    main/setup/domain/Setup/illegalserversetupexception.cpp \
    main/setup/domain/Setup/serversetupfactory.cpp \
    main/setup/infrastructure/repository/inmemoryserversetuprepository.cpp \
    main/setup/application/impl/setupserviceimpl.cpp \
    main/setup/application/impl/fileserviceimpl.cpp \
    main/serverapplication.cpp \
    main/setup/infrastructure/adapter/fileservicedbusimpl.cpp \
    main/setup/infrastructure/adapter/fileservicedbusadaptor.cpp

HEADERS  += main/gui/serverwidget.h \
    main/setup/domain/Setup/serversetup.h \
    main/setup/domain/Setup/illegalserversetupexception.h \
    main/setup/domain/Setup/serversetupfactory.h \
    main/setup/domain/Setup/ServerSetupRepository.h \
    main/setup/infrastructure/repository/inmemoryserversetuprepository.h \
    main/setup/application/api/setupservice.h \
    main/setup/application/impl/setupserviceimpl.h \
    main/setup/application/api/fileservice.h \
    main/setup/application/impl/fileserviceimpl.h \
    main/serverapplication.h \
    main/setup/infrastructure/adapter/fileservicedbusimpl.h \
    main/setup/infrastructure/adapter/fileservicedbusadaptor.h

FORMS    += main/gui/serverwidget.ui
