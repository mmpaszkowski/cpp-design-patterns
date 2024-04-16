# SOURCES AND HEADERS
set(LIBRARY_SOURCES
        src/App.cpp
        src/enum/Property.cpp
        src/AbstractDocument.cpp
        )

set(LIBRARY_HEADERS
        include/Document.h
        include/App.h
        include/AbstractDocument.h
        include/enum/Property.h
        include/HasType.h
        include/HasPrice.h
        include/HasModel.h
        include/Part.h
        include/HasParts.h
        include/Car.h
)

add_library(abstract-document STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_link_libraries(abstract-document spdlog)

set(LIBRARY_INCLUDES include)
target_include_directories(abstract-document PUBLIC ${LIBRARY_INCLUDES})

add_subdirectory(tests)

add_executable(abstract-document-exec main.cpp)
target_link_libraries(abstract-document-exec abstract-document)
