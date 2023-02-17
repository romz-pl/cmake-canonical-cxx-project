set(TEST_NAME global-tests)

add_executable(${TEST_NAME}
    global.cpp
)

target_link_libraries(${TEST_NAME}
    global
    GTest::gtest
    GTest::gtest_main
)

gtest_discover_tests(${TEST_NAME})
