include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(factory-method-test app_test.cpp factory_method.cpp)

target_link_libraries(factory-method-test PRIVATE GTest::GTest factory-method)

enable_testing()
add_test(factory-method-test factory-method-test)
