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

}

void SetupServiceImpl::turnOffServer()
{

}

void SetupServiceImpl::selectDirectoryToServe(QString path)
{

}



