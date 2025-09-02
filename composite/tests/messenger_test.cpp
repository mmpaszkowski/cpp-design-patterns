//
// Created by Mateusz Paszkowski on 13.04.2024.
//

#include <App.h>
#include <Messenger.h>
#include <gtest/gtest.h>

using namespace dp;

TEST(composite, test_message_from_orcs)
{
    testing::internal::CaptureStdout();
    dp::Messenger::messageFromOrcs().print();
    std::string message = testing::internal::GetCapturedStdout();

    ASSERT_TRUE(!message.empty());
    ASSERT_EQ(" Where there is a whip there is a way.\n", message);
}

TEST(composite, test_message_from_elves)
{
    testing::internal::CaptureStdout();
    dp::Messenger::messageFromElves().print();
    std::string message = testing::internal::GetCapturedStdout();

    ASSERT_TRUE(!message.empty());
    ASSERT_EQ(" Much wind pours from your mouth.\n", message);
}