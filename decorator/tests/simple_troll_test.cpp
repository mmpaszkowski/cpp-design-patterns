//
// Created by noname on 4/16/24.
//

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <SimpleTroll.h>
#include <regex>

using namespace dp;

TEST(decorator, test_troll_actions)
{
    SimpleTroll troll;
    ASSERT_EQ(10, troll.getAttackPower());

    testing::internal::CaptureStdout();
    troll.attack();
    ASSERT_TRUE(testing::internal::GetCapturedStdout().contains("The troll tries to grab you!"));

    testing::internal::CaptureStdout();
    troll.fleeBattle();
    ASSERT_TRUE(testing::internal::GetCapturedStdout().contains("The troll shrieks in horror and runs away!"));
}