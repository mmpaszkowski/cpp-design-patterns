//
// Created by noname on 11.11.2024.
//

#include <gtest/gtest.h>
#include <App.h>

TEST(observer, should_execute_application_without_exception)
{
    App app;
    ASSERT_NO_THROW(app.run());
}