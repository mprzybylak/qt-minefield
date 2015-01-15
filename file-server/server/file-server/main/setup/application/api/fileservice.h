#ifndef FILESERVICE_H
#define FILESERVICE_H

#include <QString>

class FileService {

public:

    virtual ~FileService();

    virtual QString getRootDirectory() = 0;

};

inline FileService::~FileService() {}

#endif // FILESERVICE_H
