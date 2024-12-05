//
// Created by Mateusz Paszkowski on 04.12.2024.
//

#include <App.h>
#include <gtest/gtest.h>

TEST(type_erasure, should_execute_application_without_exception)
{
    App app;
    ASSERT_NO_THROW(app.run());
}