# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/Cash.cpp)

set(LIBRARY_HEADERS
        include/Cash.h)

add_library(arrange-act-assert STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(arrange-act-assert spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(arrange-act-assert PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)
