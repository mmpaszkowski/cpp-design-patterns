//
// Created by Mateusz Paszkowski on 04.11.2024.
//

#include <Hobbit.h>
#include <gtest/gtest.h>

TEST(hobbit, create)
{
    auto hobbit = dp::Hobbit::create();
    ASSERT_TRUE(hobbit);
}

TEST(hobbit, to_string)
{
    auto hobbit = dp::Hobbit::create();
    ASSERT_EQ(hobbit->toString(), "Hobbit");
}
