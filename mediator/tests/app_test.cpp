//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <App.h>

TEST(mediator, should_execute_application_without_exception)
{
    testing::internal::CaptureStdout();
    App app;
    ASSERT_NO_THROW(app.run());
    testing::internal::GetCapturedStdout();
}

