# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/Wizzard.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Size.h
        include/Size.h
        include/Visibility.h
        include/Target.h
        include/Goblin.h
        include/Wizzard.h
)


add_library(command STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(command spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(command PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(command-exec main.cpp)
target_link_libraries(command-exec command)
