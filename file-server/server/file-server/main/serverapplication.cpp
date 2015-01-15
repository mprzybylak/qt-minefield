#include "serverapplication.h"

ServerApplication::ServerApplication(int &argc, char **&argv) : QApplication(argc, argv)
{
    // SETUP SERVICE
    repository = new InMemoryServerSetupRepository();
    factory = new ServerSetupFactory();
    setupService = new SetupServiceImpl(factory, repository);

    // FILE MODEL
    fileModel = new QFileSystemModel();
    fileModel->setRootPath("/home");

    // VIEW
    view = new ServerWidget(setupService, fileModel, 0);

    // bind parents
    fileModel->setParent(view);

    view->show();
}

ServerApplication::~ServerApplication()
{
    delete repository;
    delete factory;
    delete setupService;
    delete fileModel;
    delete view;
}
