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

add_executable(strategy-test app_test.cpp dragon_slayer_test.cpp)

target_link_libraries(strategy-test PRIVATE GTest::GTest GTest::GMock strategy)

enable_testing()
add_test(strategy-test strategy-test)
