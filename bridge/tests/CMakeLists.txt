include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
add_library(GTest::GMock INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)
target_link_libraries(GTest::GMock INTERFACE gmock_main)

add_executable(bridge-test app_test.cpp app_test.cpp weapon_test.cpp)

target_link_libraries(bridge-test PRIVATE GTest::GTest GTest::GMock bridge)

enable_testing()
add_test(bridge-test bridge-test)
