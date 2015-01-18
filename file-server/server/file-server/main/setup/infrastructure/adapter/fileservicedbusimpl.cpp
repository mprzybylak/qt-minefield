#include <QtDBus/QDBusConnection>
#include "fileservicedbusimpl.h"
#include "fileservicedbusadaptor.h"

FileServiceDBusImpl::FileServiceDBusImpl(FileService *service, QObject *parent): QObject(parent), service(service)
{
    new FileServiceDBusAdaptor(this);
    QDBusConnection dbus = QDBusConnection::sessionBus();
    dbus.registerObject("/FileServer", this);
    dbus.registerService("pl.mprzybylak.server");
    qDBusRegisterMetaType<QList<QString> >();
}

FileServiceDBusImpl::~FileServiceDBusImpl()
{
    delete service;
}

QString FileServiceDBusImpl::getRootDirectory()
{
    return service->getRootDirectory();
}

QList<QString> FileServiceDBusImpl::getFileList()
{
    return service->getFileList();
}
