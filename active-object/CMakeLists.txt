# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/ActiveObject.cpp
        )

set(LIBRARY_HEADERS
        include/ActiveObject.h
        include/Orc.h
        include/App.h)


add_library(active-object STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(active-object spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(active-object PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(active-object-exec main.cpp)
target_link_libraries(active-object-exec active-object)
