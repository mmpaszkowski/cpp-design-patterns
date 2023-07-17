include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(ambassador-test app_test.cpp service_ambassador_test.cpp remote_service_test.cpp client_test.cpp)

target_link_libraries(ambassador-test PRIVATE GTest::GTest ambassador)

enable_testing()
add_test(ambassador-test ambassador-test)
