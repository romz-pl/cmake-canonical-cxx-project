set(TEST_NAME random-tests)

add_executable(${TEST_NAME}
    get_random_bytes.cpp
)

target_link_libraries(${TEST_NAME}
    romz-random
    GTest::gtest_main
)

gtest_discover_tests(${TEST_NAME})
