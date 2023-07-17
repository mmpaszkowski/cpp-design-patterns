# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/ServiceAmbassador.cpp
        src/Client.cpp
        src/RemoteService.cpp
        src/util/RandomProvider.cpp
        src/RemoteServiceStatus.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/RemoteServiceInterface.h
        include/RemoteServiceStatus.h
        include/RemoteService.h
        include/util/RandomProvider.h
        include/ServiceAmbassador.h
        include/Client.h
        )

add_library(ambassador STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(ambassador spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(ambassador PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(ambassador-exec main.cpp)
target_link_libraries(ambassador-exec ambassador)
