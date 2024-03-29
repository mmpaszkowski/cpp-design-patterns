# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/WeaponType.cpp
        src/ElfWeapon.cpp
        src/ElfBlacksmith.cpp
        src/OrcWeapon.cpp
        src/OrcBlacksmith.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Blacksmith.h
        include/Weapon.h
        include/WeaponType.h
        include/ElfBlacksmith.h
        include/ElfWeapon.h
        include/OrcWeapon.h
        include/OrcBlacksmith.h
)


add_library(factory-method STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(factory-method spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(factory-method PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(factory-method-exec main.cpp)
target_link_libraries(factory-method-exec factory-method)
