//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <App.h>

TEST(abstract_factory, should_execute_application_without_exception)
{
//    testing::internal::CaptureStdout();
    App app;
    ASSERT_NO_THROW(app.run());
}