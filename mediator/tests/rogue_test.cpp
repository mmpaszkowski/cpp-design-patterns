//
// Created by Mateusz Paszkowski on 04.11.2024.
//

#include <Rogue.h>
#include <gtest/gtest.h>

TEST(rogue, create)
{
    auto hobbit = dp::Rogue::create();
    ASSERT_TRUE(hobbit);
}

TEST(rogue, to_string)
{
    auto hobbit = dp::Rogue::create();
    ASSERT_EQ(hobbit->toString(), "Rogue");
}
