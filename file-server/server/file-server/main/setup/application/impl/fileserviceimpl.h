#ifndef FILESERVICEIMPL_H
#define FILESERVICEIMPL_H

#include "../api/fileservice.h"
#include "../../domain/Setup/ServerSetupRepository.h"

class FileServiceImpl : public FileService
{

public:

    FileServiceImpl(ServerSetupRepository* serverSetupRepository);
    QString getRootDirectory();

private:

    ServerSetupRepository* setupRepository;
};

#endif // FILESERVICEIMPL_H
