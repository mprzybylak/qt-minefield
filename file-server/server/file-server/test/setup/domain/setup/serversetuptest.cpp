#include <QtTest/QTest>
#include "../../../../main/setup/domain/Setup/serversetup.h"
#include "../../../../main/setup/domain/Setup/illegalserversetupexception.h"
#include <gtest/gtest.h>
#include "gtest/gtest.h"

class ServerSetupTest
{
};

 /*
int main(int argc, char**argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
 */

TEST(ServerSetupTest, shouldAllowToTurnOnServer)
{
    // given
    ServerSetup setup;

    // when
    setup.turnOnServer();

    // then
    EXPECT_EQ(setup.isServerRunning(), true);
}

TEST(ServerSetupTest, shouldAllowToTurnOffServer)
{
    // given
    ServerSetup serverSetup;
    serverSetup.turnOnServer();

    // when
    serverSetup.turnOffServer();

    // then
    EXPECT_EQ(serverSetup.isServerRunning(), false);
}

TEST(ServerSetupTest, shouldNotAllowToTurnOnRunningServer)
{
    // given
    ServerSetup serverSetup;
    serverSetup.turnOnServer();

    // when
    EXPECT_THROW(serverSetup.turnOnServer(), IllegalServerSetupException);
}

TEST(ServerSetupTest, shouldNotAllowToTurnOffStopedServer)
{
    // given
    ServerSetup serverSetup;

    // when
    EXPECT_THROW(serverSetup.turnOffServer(), IllegalServerSetupException);
}

TEST(ServerSetupTest, shouldAllowToStoreBaseDirectory)
{
    // given
    const QString PATH = "/home/";
    ServerSetup serverSetup;

    // when
    serverSetup.setBaseDirectoryPath(PATH);

    // them
    EXPECT_EQ(serverSetup.getBaseDirectoryPath(), PATH);
}

TEST(ServerSetupTest, shouldAllowToOverwriteBaseDirectory)
{
    // given
    const QString OLD_PATH = "/home/old";
    const QString NEW_PATH = "/home/new";
    ServerSetup serverSetup;
    serverSetup.setBaseDirectoryPath(OLD_PATH);

    // when
    serverSetup.setBaseDirectoryPath(NEW_PATH);

    // then
    EXPECT_NE(serverSetup.getBaseDirectoryPath(),  OLD_PATH);
    EXPECT_EQ(serverSetup.getBaseDirectoryPath(), NEW_PATH);
}
