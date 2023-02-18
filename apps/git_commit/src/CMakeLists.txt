set(APP_NAME git_commit)

add_executable(${APP_NAME}
    main.cpp
)

message(${CMAKE_CURRENT_SOURCE_DIR})
execute_process(COMMAND git -C ${CMAKE_CURRENT_SOURCE_DIR} log -1 --pretty=format:%h
    OUTPUT_VARIABLE ROMZ_GIT_COMMIT
)

target_compile_definitions(${APP_NAME}
    PRIVATE
    "ROMZ_GIT_COMMIT=${ROMZ_GIT_COMMIT}"
)
