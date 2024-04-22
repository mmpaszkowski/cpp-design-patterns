include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED
        ivory_tower_test.cpp)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(proxy-test app_test.cpp
        ivory_tower_test.cpp
        wizard_test.cpp
        wizard_tower_proxy_test.cpp)

target_link_libraries(proxy-test PRIVATE GTest::GTest proxy)

enable_testing()
add_test(proxy-test proxy-test)
