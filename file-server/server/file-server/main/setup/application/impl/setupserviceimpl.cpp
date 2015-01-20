#include "setupserviceimpl.h"
#include <QDebug>

SetupServiceImpl::SetupServiceImpl(ServerSetupFactory* serverSetupFactory, ServerSetupRepository* serverSetupRepository):
    serverSetupFactory(serverSetupFactory),
    serverSetupRepository(serverSetupRepository)
{

}

void SetupServiceImpl::turnOnServer()
{
    ServerSetup* setup = serverSetupRepository->load();
    qDebug() << "1";
    if(setup == 0) {
        qDebug() << "if = true";
        setup = serverSetupFactory->createServerSetup();
        qDebug() << setup->isServerRunning();
    }
    qDebug() << "3";
    setup->turnOnServer();
    qDebug() << "4";
    serverSetupRepository->store(setup);
    qDebug() << "5";
}

void SetupServiceImpl::turnOffServer()
{
    ServerSetup* setup = serverSetupRepository->load();
    if(setup == 0) {
        setup = serverSetupFactory->createServerSetup();
    }

    setup->turnOffServer();

    serverSetupRepository->store(setup);
}

bool SetupServiceImpl::isServerRunning()
{
    ServerSetup* setup = serverSetupRepository->load();
    if(setup == 0) {
        setup = serverSetupFactory->createServerSetup();
        serverSetupRepository->store(setup);
    }

    return setup->isServerRunning();
}

void SetupServiceImpl::selectDirectoryToServe(QString directoryToServe)
{
    ServerSetup* setup = serverSetupRepository->load();
    if(setup == 0) {
        setup = serverSetupFactory->createServerSetup();
    }

    setup->setBaseDirectoryPath(directoryToServe);

    serverSetupRepository->store(setup);
}

QString SetupServiceImpl::getServedDirectory()
{
    ServerSetup* setup = serverSetupRepository->load();
    if(setup == 0) {
        setup = serverSetupFactory->createServerSetup();
    }
    return setup->getBaseDirectoryPath();
}

