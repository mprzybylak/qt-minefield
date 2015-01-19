#ifndef FILESERVICE_H
#define FILESERVICE_H

#include <QString>
#include <QVector>
#include <QList>
#include <QMetaType>
#include "../impl/test.h" // TODO test jest raczej w czesci api niz impl

class FileService {

public:

    virtual ~FileService();

    virtual QString getRootDirectory() = 0;
    virtual QList<QString> getFileList() = 0;



    virtual Test getTest() = 0;
    virtual TestList getTests() = 0;

};

inline FileService::~FileService() {}

#endif // FILESERVICE_H
