# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        )


add_library(type-erasure STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(type-erasure spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(type-erasure PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(type-erasure-exec main.cpp)
target_link_libraries(type-erasure-exec type-erasure)
