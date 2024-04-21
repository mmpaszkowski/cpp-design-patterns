# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Potion.h
        include/PotionType.h
        include/StrengthPotion.h
        include/PoisonPotion.h
        include/InvisibilityPotion.h
        include/HolyWaterPotion.h
        include/HealingPotion.h
        include/PotionFactory.h
        include/AlchemistShop.h
        src/AlchemistShop.cpp
        src/HealingPotion.cpp
        src/HolyWaterPotion.cpp
        src/InvisibilityPotion.cpp
        src/PoisonPotion.cpp
        src/StrengthPotion.cpp
        src/PotionFactory.cpp
)


add_library(flyweight STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(flyweight spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(flyweight PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(flyweight-exec main.cpp)
target_link_libraries(flyweight-exec flyweight)
