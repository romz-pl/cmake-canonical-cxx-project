#include <gtest/gtest.h>

#include <romz/random/get_random_bytes.h>

TEST(get_random_bytes, simple)
{
    ASSERT_NO_THROW(romz::get_random_bytes(2));
}
