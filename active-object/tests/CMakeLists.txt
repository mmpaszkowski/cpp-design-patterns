include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(active-object-test app_test.cpp)

target_link_libraries(active-object-test PRIVATE GTest::GTest active-object)

enable_testing()
add_test(active-object-test active-object-test)
