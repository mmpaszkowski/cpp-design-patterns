# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Request.h
        include/StandardOutputServer.h
        include/LoadBalancer.h
        src/LoadBalancer.cpp
        src/StandardOutputServer.cpp
        include/Server.h
)


add_library(monostate STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(monostate spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(monostate PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(monostate-exec main.cpp)
target_link_libraries(monostate-exec monostate)
