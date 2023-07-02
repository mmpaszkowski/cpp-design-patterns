# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        )


add_library(acycylic-visitor STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(acycylic-visitor spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(acycylic-visitor PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(acycylic-visitor-exec main.cpp)
target_link_libraries(acycylic-visitor-exec acycylic-visitor)
