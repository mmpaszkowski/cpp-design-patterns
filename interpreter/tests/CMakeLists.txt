include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(interpreter-test
        app_test.cpp
        plus_expression_test.cpp
        number_expression_test.cpp
        multiply_expression_test.cpp
        minus_expression_test.cpp)

target_link_libraries(interpreter-test PRIVATE GTest::GTest interpreter)

enable_testing()
add_test(interpreter-test interpreter-test)
