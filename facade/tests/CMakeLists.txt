include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(facade-test app_test.cpp
        dwarven_goldmine_facade.cpp)

target_link_libraries(facade-test PRIVATE GTest::GTest facade)

enable_testing()
add_test(facade-test facade-test)
