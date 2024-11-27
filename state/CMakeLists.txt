# SOURCES AND HEADERS
set(LIBRARY_SOURCES
    src/AngryState.cpp
    src/App.cpp
    src/Mammoth.cpp
    src/Peacefulstate.cpp
)

set(LIBRARY_HEADERS
    include/AngryState.h
    include/App.h
    include/PeacefulState.h
    include/State.h
)


add_library(state STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(state spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(state PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(state-exec main.cpp)
target_link_libraries(state-exec state)
