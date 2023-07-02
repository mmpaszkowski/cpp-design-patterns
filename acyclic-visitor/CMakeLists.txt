# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/Zoom.cpp
        src/Hayes.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/ZoomVisitor.h
        include/Zoom.h
        include/ModemVisitor.h
        include/Modem.h
        include/HayesVisitor.h
        include/Hayes.h
        include/AllModemVisitor.h
        include/ConfigureForUnixVisitor.h
        include/ConfigureForDosVisitor.h src/ConfigureForUnixVisitor.cpp src/ConfigureForDosVisitor.cpp)


add_library(acycylic-visitor STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(acycylic-visitor spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(acycylic-visitor PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(acycylic-visitor-exec main.cpp)
target_link_libraries(acycylic-visitor-exec acycylic-visitor)
