# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/Nazgul.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Nazgul.h
        include/NazgulName.h
)


add_library(iterator STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(iterator spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(iterator PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(iterator-exec main.cpp)
target_link_libraries(iterator-exec iterator)
