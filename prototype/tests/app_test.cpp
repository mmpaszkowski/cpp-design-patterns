//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <App.h>
#include <gtest/gtest.h>

TEST(prototype, should_execute_application_without_exception)
{
    constexpr App app;
    ASSERT_NO_THROW(app.run());
}