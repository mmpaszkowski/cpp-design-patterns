# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
)

set(LIBRARY_HEADERS
        include/App.h
        include/DwarvenMineWorker.h
        include/DwarwenTunnelDigger.h
        include/DwarvenGoldmineFacade.h
        include/DwarvenCartOperator.h
        include/DwarvenCartOperator.h
        include/DwarvenGoldDigger.h
)


add_library(facade STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(facade spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(facade PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(facade-exec main.cpp)
target_link_libraries(facade-exec facade)
