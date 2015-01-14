#include "gui/serverwidget.h"
#include <QApplication>
#include "setup/application/api/SetupService.h"
#include "setup/application/impl/setupserviceimpl.h"
#include "setup/domain/Setup/serversetupfactory.h"
#include "setup/infrastructure/repository/inmemoryserversetuprepository.h"

// /*

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ServerSetupRepository* repository = new InMemoryServerSetupRepository();
    ServerSetupFactory* factory = new ServerSetupFactory();

    SetupService* setupService = new SetupServiceImpl(factory, repository);

    ServerWidget w(setupService, 0);
    w.show();
    
    return a.exec();
}


// */
