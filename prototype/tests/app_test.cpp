//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <App.h>

TEST(prototype, should_execute_application_without_exception)
{
    constexpr App app;
    ASSERT_NO_THROW(app.run());
}