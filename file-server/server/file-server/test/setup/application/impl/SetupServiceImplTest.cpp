#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../../../../main/setup/application/impl/setupserviceimpl.h"

class MockServerSetupFactory : public ServerSetupFactory
{
    MOCK_METHOD0(createServerSetup, ServerSetup*());
};

class MockSetupRepository : public ServerSetupRepository
{
   MOCK_METHOD1(store, void(ServerSetup* serverSetup));
   MOCK_METHOD0(load, ServerSetup*());
};

class SetupServiceImplTest
{

};


int main(int argc, char**argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(SetupServiceImplTest, mockTest)
{
    // given
    MockServerSetupFactory setupFactory;
    MockSetupRepository setupRepository;

    SetupServiceImpl* service = new SetupServiceImpl(&setupFactory, &setupRepository);
}
