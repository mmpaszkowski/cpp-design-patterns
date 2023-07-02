include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(acycylic-visitor-test app_test.cpp)

target_link_libraries(acycylic-visitor-test PRIVATE GTest::GTest acycylic-visitor)

enable_testing()
add_test(acycylic-visitor-test acycylic-visitor-test)
