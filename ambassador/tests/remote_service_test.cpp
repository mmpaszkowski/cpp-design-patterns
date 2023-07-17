//
// Created by noname on 17.07.23.
//

#include <gtest/gtest.h>
#include <RemoteService.h>

TEST(ambassador, test_failed_call)
{
    RemoteService remoteService(new StaticRandomProvider(0.21));
    long result = remoteService.doRemoteFunction(10);
    GTEST_ASSERT_EQ(-1, result);
    ASSERT_TRUE(result == 100 || result == -1);
}

TEST(ambassador, test_successful_call)
{
    RemoteService remoteService(new StaticRandomProvider(0.21));
    long result = remoteService.doRemoteFunction(10);
    GTEST_ASSERT_EQ(-1, result);
    ASSERT_TRUE(result == 100 || result == -1);
}
