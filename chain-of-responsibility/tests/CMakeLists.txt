include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(chain-of-responsibility-test app_test.cpp
        orc_king_test.cpp)

target_link_libraries(chain-of-responsibility-test PRIVATE GTest::GTest chain-of-responsibility)

enable_testing()
add_test(chain-of-responsibility-test chain-of-responsibility-test)
