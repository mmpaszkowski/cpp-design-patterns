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

# CMAKE MODULES
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/)
include(Tools)

add_subdirectory(abstract-document)
add_subdirectory(abstract-factory)
add_subdirectory(active-object)
add_subdirectory(acyclic-visitor)
add_subdirectory(adapter)
add_subdirectory(ambassador)
add_subdirectory(arrange-act-assert)
add_subdirectory(bridge)
add_subdirectory(builder)
add_subdirectory(command)
add_subdirectory(factory-method)
add_subdirectory(monostate)
add_subdirectory(multiton)
add_subdirectory(prototype)
add_subdirectory(singleton)
add_subdirectory(template)
