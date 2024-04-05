//
// Created by noname on 01.07.23.
//

#include <App.h>
#include <gtest/gtest.h>

TEST(singleton, should_execute_application_without_exception)
{
    App app;
    ASSERT_NO_THROW(app.run());
}