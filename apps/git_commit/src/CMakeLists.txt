set(APP_NAME git_commit)

add_executable(${APP_NAME}
    main.cpp
)

execute_process(COMMAND git log -1 --pretty=format:%h
    OUTPUT_VARIABLE ROMZ_GIT_COMMIT
)

target_compile_definitions(${APP_NAME}
    PRIVATE
    "ROMZ_GIT_COMMIT=${ROMZ_GIT_COMMIT}"
)
