include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(composite-test app_test.cpp
        messenger_test.cpp)

target_link_libraries(composite-test PRIVATE GTest::GTest composite)

enable_testing()
add_test(composite-test composite-test)
