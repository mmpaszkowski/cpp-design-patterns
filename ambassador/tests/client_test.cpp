//
// Created by Mateusz Paszkowski on 17.07.2023.
//

#include <gtest/gtest.h>
#include <Client.h>

TEST(ambassador, test_client)
{
    Client client;
    auto result = client.useService(10);
    GTEST_ASSERT_TRUE(result == 100 || result == -1);
}