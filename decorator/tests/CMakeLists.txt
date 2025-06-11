include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
add_library(GTest::GMock INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)
target_link_libraries(GTest::GMock INTERFACE gmock_main)

add_executable(decorator-test app_test.cpp clubbed_troll_test.cpp
        simple_troll_test.cpp)

target_link_libraries(decorator-test PRIVATE GTest::GTest GTest::GMock decorator)

enable_testing()
add_test(decorator-test decorator-test)
