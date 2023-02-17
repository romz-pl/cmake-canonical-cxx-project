#include <gtest/gtest.h>

#include <romz/math/mul.h>

TEST(mul, simple)
{
    ASSERT_EQ(mul(2, 4), 8);
}
