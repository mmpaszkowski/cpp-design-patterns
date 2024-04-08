include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(command-test app_test.cpp
        command_test.cpp)

target_link_libraries(command-test PRIVATE GTest::GTest command)

enable_testing()
add_test(command-test command-test)
