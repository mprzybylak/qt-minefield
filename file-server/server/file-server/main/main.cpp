#include "gui/serverwidget.h"
#include <QApplication>
#include <QFileSystemModel>
#include "setup/application/api/SetupService.h"
#include "setup/application/impl/setupserviceimpl.h"
#include "setup/domain/Setup/serversetupfactory.h"
#include "setup/infrastructure/repository/inmemoryserversetuprepository.h"

// /*

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // SETUP SERVICE
    ServerSetupRepository* repository = new InMemoryServerSetupRepository();
    ServerSetupFactory* factory = new ServerSetupFactory();
    SetupService* setupService = new SetupServiceImpl(factory, repository);

    // FILE MODEL
    QFileSystemModel* fileModel = new QFileSystemModel();
    fileModel->setRootPath("/home");


    ServerWidget w(setupService, fileModel, 0);

    // bind parents
    fileModel->setParent(&w);

    w.show();
    
    return a.exec();
}


// */
