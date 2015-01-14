#include "serversetupfactory.h"

ServerSetup* ServerSetupFactory::createServerSetup()
{
    return new ServerSetup();
}
