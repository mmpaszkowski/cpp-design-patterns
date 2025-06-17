//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <App.h>
#include <gtest/gtest.h>

using namespace dp;

TEST(AbstractFactory, ApplicationExecution_NoThrowsException)
{
    App app;
    ASSERT_NO_THROW(app.run());
}