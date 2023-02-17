set(LIB_NAME math)

add_library(${LIB_NAME} STATIC
    add.cpp
    mul.cpp
)

target_include_directories( ${LIB_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)
