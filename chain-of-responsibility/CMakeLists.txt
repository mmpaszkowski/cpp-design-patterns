# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/OrcCommander.cpp
        src/OrcKing.cpp
        src/OrcOfficer.cpp
        src/OrcSoldier.cpp
        src/RequestType.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/RequestHandler.h
        include/Request.h
        include/RequestType.h
        include/OrcSoldier.h
        include/OrcOfficer.h
        include/OrcKing.h
        include/OrcCommander.h
)


add_library(chain-of-responsibility STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(chain-of-responsibility spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(chain-of-responsibility PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(chain-of-responsibility-exec main.cpp)
target_link_libraries(chain-of-responsibility-exec chain-of-responsibility)
