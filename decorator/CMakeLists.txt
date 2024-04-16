# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/ClubbedTroll.cpp
        src/SimpleTroll.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Troll.h
        include/SimpleTroll.h
        include/ClubbedTroll.h
)


add_library(decorator STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(decorator spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(decorator PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(decorator-exec main.cpp)
target_link_libraries(decorator-exec decorator)
