//
// Created by Mateusz Paszkowski on 01.11.2024.
//

#include <App.h>
#include <gtest/gtest.h>
#include <Action.h>

TEST(action, left_stream_operator)
{
    {
        std::stringstream ss;
        ss << dp::Action::Hunt;
        ASSERT_EQ(ss.str(), "Hunt");
    }
    {
        std::stringstream ss;
        ss << dp::Action::Tale;
        ASSERT_EQ(ss.str(), "Tale");
    }
    {
        std::stringstream ss;
        ss << dp::Action::Gold;
        ASSERT_EQ(ss.str(), "Gold");
    }
    {
        std::stringstream ss;
        ss << dp::Action::Enemy;
        ASSERT_EQ(ss.str(), "Enemy");
    }
    {
        std::stringstream ss;
        ss << dp::Action::None;
        ASSERT_EQ(ss.str(), "None");
    }
}

TEST(action, to_string)
{
    ASSERT_EQ(dp::toString(dp::Action::Hunt), "Hunt");
    ASSERT_EQ(dp::toString(dp::Action::Tale), "Tale");
    ASSERT_EQ(dp::toString(dp::Action::Gold), "Gold");
    ASSERT_EQ(dp::toString(dp::Action::Enemy), "Enemy");
    ASSERT_EQ(dp::toString(dp::Action::None), "None");
}

TEST(action, get_title)
{
    ASSERT_EQ(dp::getTitle(dp::Action::Hunt), "hunted a rabbit");
    ASSERT_EQ(dp::getTitle(dp::Action::Tale), "tells a tale");
    ASSERT_EQ(dp::getTitle(dp::Action::Gold), "found gold");
    ASSERT_EQ(dp::getTitle(dp::Action::Enemy), "spotted enemies");
    ASSERT_EQ(dp::getTitle(dp::Action::None), "");
}

TEST(action, get_desciption)
{
    ASSERT_EQ(dp::getDescription(dp::Action::Hunt), "arrives for dinner");
    ASSERT_EQ(dp::getDescription(dp::Action::Tale), "comes to listen");
    ASSERT_EQ(dp::getDescription(dp::Action::Gold), "takes his share of the gold");
    ASSERT_EQ(dp::getDescription(dp::Action::Enemy), "runs for cover");
    ASSERT_EQ(dp::getDescription(dp::Action::None), "");
}