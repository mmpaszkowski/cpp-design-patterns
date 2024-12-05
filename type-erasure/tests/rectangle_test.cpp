//
// Created by Mateusz Paszkowski on 04.12.2024.
//

#include <Rectangle.h>
#include <gtest/gtest.h>

TEST(rectangle, rectangle)
{
    dp::Rectangle rectangle(2.0, 3.0);
    ASSERT_DOUBLE_EQ(rectangle.getWidth(), 2.0);
    ASSERT_DOUBLE_EQ(rectangle.getHeight(), 3.0);
    ASSERT_DOUBLE_EQ(rectangle.getArea(), 6.0);
}
