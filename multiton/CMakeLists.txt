# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/NazgulName.h
        include/NazgulName.h
        include/Nazgul.h
        include/Nazgul.h
        src/Nazgul.cpp
)


add_library(multiton STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(multiton spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(multiton PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(multiton-exec main.cpp)
target_link_libraries(multiton-exec multiton)
