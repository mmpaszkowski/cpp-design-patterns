//
// Created by Mateusz Paszkowski on 04.12.2024.
//

#include <Square.h>
#include <gtest/gtest.h>

TEST(square, square)
{
    dp::Square square(3.0);
    ASSERT_DOUBLE_EQ(square.getSide(), 3.0);
    ASSERT_DOUBLE_EQ(square.getArea(), 9.0);
}
