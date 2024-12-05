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

target_link_libraries(GTest::GTest INTERFACE gtest_main gmock_main)

add_executable(type-erasure-test app_test.cpp circle_test.cpp parallelogram_test.cpp rectangle_test.cpp square_test.cpp console_drawer_test.cpp)

target_link_libraries(type-erasure-test PRIVATE GTest::GTest type-erasure)

enable_testing()
add_test(type-erasure-test type-erasure-test)
