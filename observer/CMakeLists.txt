# SOURCES AND HEADERS
set(LIBRARY_SOURCES
    src/App.cpp
    src/Weather.cpp
)

set(LIBRARY_HEADERS
    include/App.h
    include/Hobbits.h
    include/Weather.h
    include/WeatherObserver.h
    include/WeatherType.h
)

add_library(observer STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(observer spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(observer PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(observer-exec main.cpp)
target_link_libraries(observer-exec observer)
