# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/StealingMethod.h
        include/SubtleMethod.h
        )


add_library(template-method STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(template-method spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(template-method PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(template-method-exec main.cpp)
target_link_libraries(template-method-exec template-method)
