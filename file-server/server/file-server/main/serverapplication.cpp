#include "serverapplication.h"
#include "setup/infrastructure/adapter/fileservicedbusimpl.h"
#include "setup/application/impl/fileserviceimpl.h"

ServerApplication::ServerApplication(int &argc, char **&argv) : QApplication(argc, argv)
{
    // SETUP SERVICE
    repository = new InMemoryServerSetupRepository();
    factory = new ServerSetupFactory();
    setupService = new SetupServiceImpl(factory, repository);

    // FILE MODEL
    fileModel = new QFileSystemModel();
    fileModel->setRootPath("/home");

    // FILE SERVICE
    FileServiceDBusImpl* serviceDecorator = new FileServiceDBusImpl(new FileServiceImpl(repository));
    fileService = serviceDecorator;

    // VIEW
    view = new ServerWidget(setupService, fileModel, 0);

    // bind parents
    fileModel->setParent(view);
    serviceDecorator->setParent(view);

    view->show();
}

ServerApplication::~ServerApplication()
{
    delete repository;
    delete factory;
    delete setupService;
    delete fileModel;
    delete fileService;
    delete view;
}
