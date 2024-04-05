# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/SingletonFactory.h
        include/WeaponType.h
        include/Weapon.h
        include/OrcWeapon.h
        include/ElfWeapon.h
        src/SingletonFactory.cpp
)


add_library(singleton STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(singleton spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(singleton PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(singleton-exec main.cpp)
target_link_libraries(singleton-exec singleton)
