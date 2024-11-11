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

add_executable(mediator-test 
    app_test.cpp 
    action_test.cpp
    hobbit_test.cpp
    hunter_test.cpp
    party_member_test.cpp
    party_test.cpp
    rogue_test.cpp
    wizard_test.cpp
)

target_link_libraries(mediator-test PRIVATE GTest::GTest GTest::GMock spdlog::spdlog mediator)

enable_testing()
add_test(mediator-test mediator-test)
