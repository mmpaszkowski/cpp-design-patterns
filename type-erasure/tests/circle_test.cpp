//
// Created by Mateusz Paszkowski on 04.12.2024.
//

#include <gtest/gtest.h>
#include <Circle.h>

TEST(circle, circle)
{
    dp::Circle circle(1.0);
    ASSERT_DOUBLE_EQ(circle.getRadius(), 1.0);
    ASSERT_DOUBLE_EQ(circle.getArea(), std::numbers::pi);
}