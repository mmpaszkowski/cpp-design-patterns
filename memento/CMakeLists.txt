# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/Star.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Star.h
        include/StarMemento.h
        include/StarType.h
        )


add_library(memento STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(memento spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(memento PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(memento-exec main.cpp)
target_link_libraries(memento-exec memento)
