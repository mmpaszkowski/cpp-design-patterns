//
// Created by Mateusz Paszkowski on 30.11.2024.
//

#include <Soldier.h>
#include <UnitVisitor.h>
#include <gtest/gtest.h>

TEST(soldier, construction)
{
    dp::Soldier sergeant;
    ASSERT_EQ(sergeant.size(), 0ull);
}

TEST(soldier, to_string)
{
    dp::Soldier sergeant;
    ASSERT_EQ(sergeant.toString(), "soldier");
}
