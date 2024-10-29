include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(mediator-test app_test.cpp)

target_link_libraries(mediator-test PRIVATE GTest::GTest mediator)

enable_testing()
add_test(mediator-test mediator-test)
