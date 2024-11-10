# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/Party.cpp
        src/PartyMember.cpp
)

set(LIBRARY_HEADERS
        include/Action.h
        include/App.h
        include/Hobbit.h
        include/Hunter.h
        include/Party.h
        include/PartyMember.h
        include/Rogue.h
        include/Wizard.h
)


add_library(mediator STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(mediator spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(mediator PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(mediator-exec main.cpp)
target_link_libraries(mediator-exec mediator)
