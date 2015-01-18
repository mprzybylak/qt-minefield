#include "fileserviceimpl.h"
#include <QDebug>
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

QList<QString> FileServiceImpl::getFileList()
{
    QList<QString> list;
    list.append("1");
    list.append("2");
    list.append("3");
    return list;
}
