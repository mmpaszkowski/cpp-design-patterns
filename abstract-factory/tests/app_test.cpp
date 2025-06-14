//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <App.h>
#include <gtest/gtest.h>

using namespace dp;

TEST(abstract_factory, should_execute_application_without_exception)
{
    App app;
    ASSERT_NO_THROW(app.run());
}