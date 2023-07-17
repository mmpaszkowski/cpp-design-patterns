cmake_minimum_required(VERSION 3.22)
project(cpp_design_patterns)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG        v1.x
)
FetchContent_MakeAvailable(spdlog)

add_subdirectory(abstract-document)
add_subdirectory(abstract-factory)
add_subdirectory(active-object)
add_subdirectory(acyclic-visitor)
add_subdirectory(adapter)
add_subdirectory(ambassador)
add_subdirectory(arrange-act-assert)
add_subdirectory(template)
