# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        )


add_library(template STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(template spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(template PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(template-exec main.cpp)
target_link_libraries(template-exec template)
