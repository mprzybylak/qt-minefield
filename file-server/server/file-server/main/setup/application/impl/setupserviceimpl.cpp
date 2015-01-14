#include "setupserviceimpl.h"

SetupServiceImpl::SetupServiceImpl(ServerSetupFactory* serverSetupFactory, ServerSetupRepository* serverSetupRepository):
    serverSetupFactory(serverSetupFactory),
    serverSetupRepository(serverSetupRepository)
{

}

SetupServiceImpl::~SetupServiceImpl() {
    delete serverSetupFactory;
    delete serverSetupRepository;
}

void SetupServiceImpl::turnOnServer()
{
    ServerSetup* setup = serverSetupRepository->load();
    if(setup == 0) {
        setup = serverSetupFactory->createServerSetup();
    }

    setup->turnOnServer();

    serverSetupRepository->store(setup);
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
    }

    serverSetupRepository->store(setup);

    return setup->isServerRunning();
}

void SetupServiceImpl::selectDirectoryToServe(QString path)
{

}



