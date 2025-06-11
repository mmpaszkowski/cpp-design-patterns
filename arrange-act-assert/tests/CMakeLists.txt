include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(arrange-act-assert-test cash_aaa_test.cpp cash_anti_aaa_test.cpp)

target_link_libraries(arrange-act-assert-test PRIVATE GTest::GTest arrange-act-assert)

enable_testing()
add_test(arrange-act-assert-test arrange-act-assert-test)
