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

target_link_libraries(GTest::GTest INTERFACE gtest_main gmock_main)

add_executable(visitor-test app_test.cpp commander_test.cpp "sergeant_test.cpp" "soldier_test.cpp" "visitors_test.cpp")

target_link_libraries(visitor-test PRIVATE GTest::GTest visitor)

enable_testing()
add_test(visitor-test visitor-test)
