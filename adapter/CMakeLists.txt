# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/FishingBoatAdapter.h
        include/FishingBoat.h
        include/Capitan.h)


add_library(adapter STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(adapter spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(adapter PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(adapter-exec main.cpp)
target_link_libraries(adapter-exec adapter)
