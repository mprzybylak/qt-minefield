#ifndef FILESERVICEDBUSADAPTER_H
#define FILESERVICEDBUSADAPTER_H

#include <QObject>
#include <QList>
#include <QMetaType>
#include "../../application/api/fileservice.h"

Q_DECLARE_METATYPE(QList<QString>)

class FileServiceDBusImpl : public QObject, public FileService
{

    Q_OBJECT
    Q_CLASSINFO("D-BUS File Service", "pl.mprzybylak.server")

public:

    FileServiceDBusImpl(FileService* service, QObject* parent = 0);
    ~FileServiceDBusImpl();

public slots:

    QString getRootDirectory();
    QList<QString> getFileList();

private:

    FileService* service;


};

#endif // FILESERVICEDBUSADAPTER_H
