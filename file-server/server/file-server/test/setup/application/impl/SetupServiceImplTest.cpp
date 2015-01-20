#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../../../../main/setup/application/impl/setupserviceimpl.h"
#include "../../domain/setup/setupsetupfactorymock.h"
#include "../../domain/setup/ServerSetupRepositoryTest.h"


using ::testing::Return;
using ::testing::AtLeast;
using ::testing::NotNull;

class SetupServiceImplTest
{

};

int main(int argc, char**argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(SetupServiceImplTest, shouldCreateSetupIfAbsent)
{
    // given
    ServerSetupRepositoryMock setupRepository;
    EXPECT_CALL(setupRepository, load()).WillOnce(Return((ServerSetup*)0));
    EXPECT_CALL(setupRepository, store(NotNull()));

    ServerSetupFactory setupFactory;

    SetupServiceImpl* service = new SetupServiceImpl(&setupFactory, &setupRepository);

    // when
    service->turnOnServer();

    // clean up
    delete service;
}

TEST(SetupServiceImplTest, shouldTurnOnService)
{
    // given
    ServerSetupRepositoryMock setupRepository;
    EXPECT_CALL(setupRepository, load()).WillOnce(Return((ServerSetup*)0));
    ServerSetupFactory setupFactory;
    SetupServiceImpl* service = new SetupServiceImpl(&setupFactory, &setupRepository);

    // when
    service->turnOnServer();

    // then
    EXPECT_EQ(service->isServerRunning(), true);

    // clean up
    delete service;
}

TEST(SetupServiceImplTest, shouldTurnOffService)
{
    // given
    ServerSetupRepositoryMock setupRepository;
    EXPECT_CALL(setupRepository, load()).WillOnce(Return((ServerSetup*)0));
    ServerSetupFactory setupFactory;
    SetupServiceImpl* service = new SetupServiceImpl(&setupFactory, &setupRepository);
    service->turnOnServer();

    // when
    service->turnOffServer();

    // then
    EXPECT_EQ(service->isServerRunning(), false);

    // clean up
    delete service;

}

TEST(SetupServiceImplTest, shouldChangeDirectory)
{
    // given
    ServerSetupRepositoryMock setupRepository;
    EXPECT_CALL(setupRepository, load()).WillOnce(Return((ServerSetup*)0));
    ServerSetupFactory setupFactory;
    SetupServiceImpl* service = new SetupServiceImpl(&setupFactory, &setupRepository);

    // when
    const QString DIRECTORY = "/home";
    service->selectDirectoryToServe(DIRECTORY);

    // then
    EXPECT_EQ(service->getServedDirectory(), DIRECTORY);

    // clean up
    delete service;
}
