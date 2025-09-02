//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>
#include <App.h>

TEST(memento, should_execute_application_without_exception)
{
    App app;
    ASSERT_NO_THROW(app.run());
}