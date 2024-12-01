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

add_executable(template-method-test app_test.cpp halfling_thief_test.cpp)

target_link_libraries(template-method-test PRIVATE GTest::GTest GTest::GMock template-method)

enable_testing()
add_test(template-method-test template-method-test)
