//
// Created by noname on 04.11.24.
//

#include <Hunter.h>
#include <gtest/gtest.h>

TEST(hunter, create)
{
    auto hobbit = dp::Hunter::create();
    ASSERT_TRUE(hobbit);
}

TEST(hunter, to_string)
{
    auto hobbit = dp::Hunter::create();
    ASSERT_EQ(hobbit->toString(), "Hunter");
}
