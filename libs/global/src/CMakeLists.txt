set(LIB_NAME romz-global)

add_library(${LIB_NAME} STATIC
    global.cpp
)

target_include_directories( ${LIB_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)
