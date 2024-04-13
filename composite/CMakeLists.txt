# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/LetterComposite.cpp
        src/Word.cpp
        src/Letter.cpp
        src/Sentence.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/LetterComposite.h
        include/Word.h
        include/Letter.h
        include/Sentence.h
        include/Messenger.h
)


add_library(composite STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(composite spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(composite PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(composite-exec main.cpp)
target_link_libraries(composite-exec composite)
