#include "setupserviceimpl.h"

ServerServiceImpl::ServerServiceImpl(ServerSetupFactory* serverSetupFactory, ServerSetupRepository* serverSetupRepository):
    serverSetupFactory(serverSetupFactory),
    serverSetupRepository(serverSetupRepository)
{

}

ServerServiceImpl::~ServerServiceImpl() {
    delete serverSetupFactory;
    delete serverSetupRepository;
}

void ServerServiceImpl::turnOnServer()
{
    ServerSetup* setup = serverSetupRepository->load();
    if(setup == 0) {
        setup = serverSetupFactory->createServerSetup();
    }

    setup->turnOnServer();

    serverSetupRepository->store(setup);
}

void ServerServiceImpl::turnOffServer()
{
    ServerSetup* setup = serverSetupRepository->load();
    if(setup == 0) {
        setup = serverSetupFactory->createServerSetup();
    }

    setup->turnOffServer();

    serverSetupRepository->store(setup);
}

bool ServerServiceImpl::isServerRunning()
{
    ServerSetup* setup = serverSetupRepository->load();
    if(setup == 0) {
        setup = serverSetupFactory->createServerSetup();
        serverSetupRepository->store(setup);
    }

    return setup->isServerRunning();
}

void ServerServiceImpl::selectDirectoryToServe(QString directoryToServe)
{
    this->directoryToServe = directoryToServe;
}



