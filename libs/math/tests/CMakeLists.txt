set(TEST_NAME math-tests)

add_executable(${TEST_NAME}
    add.cpp
    mul.cpp
)

target_link_libraries(${TEST_NAME}
    romz-math
    GTest::gtest_main
)

gtest_discover_tests(${TEST_NAME})
