include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(builder-test app_test.cpp hero.cpp)

target_link_libraries(builder-test PRIVATE GTest::GTest builder)

enable_testing()
add_test(builder-test builder-test)
