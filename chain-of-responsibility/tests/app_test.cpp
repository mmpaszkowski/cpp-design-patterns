//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <App.h>

TEST(chain_of_responsibility, should_execute_application_without_exception)
{
    App app;
    ASSERT_NO_THROW(app.run());
}