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

Test FileServiceImpl::getTest() {
    return Test(1,2);
}

TestList FileServiceImpl::getTests() {
    Test t1(1,2);
    Test t2(3,4);
    Test t3(5,6);
    QList<Test> list;
    list.append(t1);
    list.append(t2);
    list.append(t3);

    foreach (Test t1, list) {
        qDebug() << t1.getA() << t1.getB();
    }

    return list;
}
