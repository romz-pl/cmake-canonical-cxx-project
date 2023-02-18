set(LIB_NAME romz-random)

add_library(${LIB_NAME} STATIC
    get_random_bytes.cpp
)

target_link_libraries(${LIB_NAME}
    PUBLIC
    OpenSSL::SSL
)

target_include_directories( ${LIB_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)
