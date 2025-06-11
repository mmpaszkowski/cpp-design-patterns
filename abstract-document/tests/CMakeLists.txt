include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(abstract-document-test
        abstract_document_test.cpp
        app_test.cpp
        domain_test.cpp)

target_link_libraries(abstract-document-test PRIVATE GTest::GTest abstract-document)

enable_testing()
add_test(abstract-document-test abstract-document-test)
