#include <gtest/gtest.h>

#include <romz/math/add.h>

TEST(add, simple)
{
    ASSERT_EQ(add(2, 4), 6);
}
