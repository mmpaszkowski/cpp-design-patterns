//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <LoadBalancer.h>

using namespace dp;

class MockServer : public Server {
public:
    MOCK_METHOD(const std::string&, getHost, (), (const, noexcept, override));
    MOCK_METHOD(int, getPort, (), (const, noexcept, override));
    MOCK_METHOD(size_t, getId, (), (const, noexcept, override));
    MOCK_METHOD(void, serve, (const Request& request), (const, noexcept, override));
};

TEST(monostate, test_same_state_amongst_all_instances)
{
    LoadBalancer firstBalancer;
    LoadBalancer secondBalancer;

    firstBalancer.addServer(std::make_unique<StandardOutputServer>("localhost", 8085, 6));
    // Both should have the same number of servers.
    ASSERT_EQ(firstBalancer.getNoOfServers(), secondBalancer.getNoOfServers());
    // Both Should have the same LastServedId
    ASSERT_EQ(firstBalancer.getLastServedId(), secondBalancer.getLastServedId());
}

TEST(monostate, testServe)
{
    using ::testing::_;

    auto server = std::make_unique<MockServer>();
    EXPECT_CALL(*server, serve(_)).Times(2);

    LoadBalancer loadBalancer;
    loadBalancer.addServer(std::move(server));

    Request request = Request("test");
    for (size_t i = 0; i < loadBalancer.getNoOfServers() * 2; i++)
    {
        loadBalancer.serverRequest(request);
    }
    loadBalancer.removeServer();
}