# SOURCES AND HEADERS
set(LIBRARY_SOURCES
    src/App.cpp
    src/Commander.cpp 
    src/CommanderVisitor.cpp
    src/Sergeant.cpp
    src/SergeantVisitor.cpp
    src/Soldier.cpp
    src/SoldierVisitor.cpp
    src/Unit.cpp
)

set(LIBRARY_HEADERS
    include/App.h
    include/Commander.h
    include/CommanderVisitor.h
    include/Sergeant.h
    include/SergeantVisitor.h
    include/Soldier.h
    include/SoldierVisitor.h
    include/Unit.h
    include/UnitVisitor.h
)


add_library(visitor STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS} )

target_link_libraries(visitor spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(visitor PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(visitor-exec main.cpp)
target_link_libraries(visitor-exec visitor)
