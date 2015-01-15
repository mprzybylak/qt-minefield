#include "fileserviceimpl.h"
#include "../../domain/Setup/illegalserversetupexception.h"

FileServiceImpl::FileServiceImpl(ServerSetupRepository* setupRepository):setupRepository(setupRepository)
{

}

QString FileServiceImpl::getRootDirectory()
{
    ServerSetup* setup = setupRepository->load();

    if(setup == 0) {
        throw IllegalServerSetupException::nonExistingSetup();
    }
    if(!setup->isServerRunning()) {
        throw IllegalServerSetupException::serverStoped();
    }

    return setup->getBaseDirectoryPath();
}
