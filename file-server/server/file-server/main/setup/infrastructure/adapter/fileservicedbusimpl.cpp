#include <QtDBus/QDBusConnection>
#include "fileservicedbusimpl.h"
#include "fileservicedbusadaptor.h"

FileServiceDBusImpl::FileServiceDBusImpl(FileService *service, QObject *parent): QObject(parent), service(service)
{
    qDBusRegisterMetaType<Test>();
    qDBusRegisterMetaType<TestList>();

    new FileServiceDBusAdaptor(this);

    QDBusConnection dbus = QDBusConnection::sessionBus();
    dbus.registerObject("/FileServer", this);
    dbus.registerService("pl.mprzybylak.server");

    //qDBusRegisterMetaType<QList<QString> >();
}

FileServiceDBusImpl::~FileServiceDBusImpl()
{
    delete service;
}

QString FileServiceDBusImpl::getRootDirectory()
{
    return service->getRootDirectory();
}

Test FileServiceDBusImpl::getTest()
{
    qDebug() << "get test";
    return service->getTest();
}

QList<QString> FileServiceDBusImpl::getFileList()
{
    qDebug() << "get file list";
    return service->getFileList();
}
TestList FileServiceDBusImpl::getTests()
{
    qDebug() << "get tests";
    return service->getTests();
}
