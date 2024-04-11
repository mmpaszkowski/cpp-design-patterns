# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/FlyingEnchantment.cpp
        src/Hammer.cpp
        src/SoulEatingEnchantment.cpp
        src/Sword.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Enchantment.h
        include/FlyingEnchantment.h
        include/SoulEatingEnchantment.h
        include/Weapon.h
        include/Hammer.h
        include/Sword.h

)


add_library(bridge STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(bridge spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(bridge PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(bridge-exec main.cpp)
target_link_libraries(bridge-exec bridge)
