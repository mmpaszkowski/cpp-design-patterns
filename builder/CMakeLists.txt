# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/Armor.cpp
        src/HairColor.cpp
        src/HairType.cpp
        src/Profession.cpp
        src/Weapon.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Armor.h
        include/HairColor.h
        include/HairType.h
        include/Hero.h
        include/Profession.h
        include/Weapon.h
        src/Hero.cpp
)


add_library(builder STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(builder spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(builder PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(builder-exec main.cpp)
target_link_libraries(builder-exec builder)
