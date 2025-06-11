include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(memento-test app_test.cpp star_test.cpp)

target_link_libraries(memento-test PRIVATE GTest::GTest memento)

enable_testing()
add_test(memento-test memento-test)
