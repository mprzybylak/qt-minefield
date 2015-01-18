#ifndef FILESERVICE_H
#define FILESERVICE_H

#include <QString>
#include <QVector>
#include <QList>

class FileService {

public:

    virtual ~FileService();

    virtual QString getRootDirectory() = 0;
    virtual QList<QString> getFileList() = 0;

};

inline FileService::~FileService() {}

#endif // FILESERVICE_H
