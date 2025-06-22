//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <App.h>
#include <gtest/gtest.h>

/**
 * @brief Verifies that the application can be executed without throwing exceptions.
 *
 * Scenario:
 *   Given an application entry point
 *   When the application is run
 *   Then no exception should be thrown
 */
TEST(AdapterPattern, ShouldRunApplicationWithoutThrowing)
{
    // Given: an instance of the application
    dp::App app;

    // When / Then: running the app should not throw
    ASSERT_NO_THROW(app.run());
}