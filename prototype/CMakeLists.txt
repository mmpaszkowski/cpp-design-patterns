# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
)

set(LIBRARY_HEADERS
        include/App.h
        include/HeroFactory.h
        include/HeroFactoryImpl.h
        include/Beast.h
        include/Warlord.h
        include/Mage.h
        include/OrcMage.h
        include/OrcWarlord.h
        include/OrcBeast.h
        include/ElfBeast.h
        include/ElfMage.h
        include/ElfWarlord.h
)


add_library(prototype STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(prototype spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(prototype PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(prototype-exec main.cpp)
target_link_libraries(prototype-exec prototype)
