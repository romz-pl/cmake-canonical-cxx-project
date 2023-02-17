#include <gtest/gtest.h>

#include <romz/global/global.h>

TEST(global, construct)
{
    global<int> g;
    ASSERT_FALSE(g.exists());
    ASSERT_NO_THROW(g.init());
    ASSERT_TRUE(g.exists());
    ASSERT_NO_THROW(g.destroy());
    ASSERT_FALSE(g.exists());
}

TEST(global, double_init)
{
    global<int> g;
    ASSERT_NO_THROW(g.init());
    ASSERT_TRUE(g.exists());
    ASSERT_ANY_THROW(g.init());
    ASSERT_NO_THROW(g.destroy());
}

TEST(global, double_destroy)
{
    global<int> g;
    ASSERT_NO_THROW(g.init());
    ASSERT_TRUE(g.exists());
    ASSERT_NO_THROW(g.destroy());
    ASSERT_ANY_THROW(g.destroy());
}
