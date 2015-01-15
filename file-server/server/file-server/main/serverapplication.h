#ifndef SERVERAPPLICATION_H
#define SERVERAPPLICATION_H

#include <QFileSystemModel>
#include <QApplication>
#include "gui/serverwidget.h"
#include "setup/application/api/setupservice.h"
#include "setup/application/impl/setupserviceimpl.h"
#include "setup/domain/Setup/serversetupfactory.h"
#include "setup/infrastructure/repository/inmemoryserversetuprepository.h"

class ServerApplication: public QApplication
{
public:

    ServerApplication(int& argc, char**& argv);
    ~ServerApplication();

private:

    ServerSetupRepository* repository;
    ServerSetupFactory* factory;
    SetupService* setupService;
    QFileSystemModel* fileModel;
    ServerWidget* view;
};

#endif // SERVERAPPLICATION_H
