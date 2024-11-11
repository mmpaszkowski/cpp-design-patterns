//
// Created by Mateusz Paszkowski on 11.11.2024.
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
