# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/IvoryTower.cpp
        src/WizardTowerProxy.cpp
)

set(LIBRARY_HEADERS
        include/App.h
        include/IvoryTower.h
        include/Wizard.h
        include/WizardTower.h
        include/WizardTowerProxy.h
)


add_library(proxy STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(proxy spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(proxy PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(proxy-exec main.cpp)
target_link_libraries(proxy-exec proxy)
