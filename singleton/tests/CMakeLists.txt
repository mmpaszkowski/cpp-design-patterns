include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(singleton-test
        app_test.cpp
        singleton.cpp)

target_link_libraries(singleton-test PRIVATE GTest::GTest singleton)

enable_testing()
add_test(singleton-test singleton-test)
