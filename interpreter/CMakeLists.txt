# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        )

set(LIBRARY_HEADERS
        include/App.h
        include/Expression.h
        include/MinusExpression.h
        include/MultiplyExpression.h
        include/NumberExpression.h
        include/PlusExpression.h
        src/PlusExpression.cpp
        src/NumberExpression.cpp
        src/MultiplyExpression.cpp
        src/MinusExpression.cpp
)


add_library(interpreter STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(interpreter spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(interpreter PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(interpreter-exec main.cpp)
target_link_libraries(interpreter-exec interpreter)
