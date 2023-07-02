# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/ElfArmy.cpp
        src/ElfCastle.cpp
        src/ElfKing.cpp
        src/OrcArmy.cpp
        src/OrcCastle.cpp
        src/OrcKing.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Army.h
        include/Castle.h
        include/ElfArmy.h
        include/ElfCastle.h
        include/ElfKing.h
        include/ElfKingdomFactory.h
        include/King.h
        include/Kingdom.h
        include/KingdomFactory.h
        include/OrcArmy.h
        include/OrcCastle.h
        include/OrcKing.h
        include/OrcKingdomFactory.h
        src/Kingdom.cpp)


add_library(abstract-factory STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(abstract-factory spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(abstract-factory PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(abstract-factory-exec main.cpp)
target_link_libraries(abstract-factory-exec abstract-factory)
