include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(prototype-test app_test.cpp prototype.cpp)

target_link_libraries(prototype-test PRIVATE GTest::GTest prototype)

enable_testing()
add_test(prototype-test prototype-test)
