//
// Created by Mateusz Paszkowski on 04.12.2024.
//

#include <gtest/gtest.h>
#include <Parallelogram.h>

TEST(parallelogram, parallelogram)
{
    dp::Parallelogram parallelogram(2.0, 3.0);
    ASSERT_DOUBLE_EQ(parallelogram.getWidth(), 2.0);
    ASSERT_DOUBLE_EQ(parallelogram.getHeight(), 3.0);
    ASSERT_DOUBLE_EQ(parallelogram.getArea(), 6.0);
}
