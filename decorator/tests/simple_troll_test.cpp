//
// Created by Mateusz Paszkowski on 16.04.2024.
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