//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>
#include <Cash.h>
#include <stdexcept>

TEST(arrange_act_assert, test_plus)
{
    // Arrange
    Cash cash(3);
    // Act
    cash.plus(4);
    // Assert
    GTEST_ASSERT_EQ(7, cash.count());
}

TEST(arrange_act_assert, test_minus)
{
    // Arrange
    Cash cash(8);
    // Act
    cash.minus(5);
    // Assert
    GTEST_ASSERT_EQ(3, cash.count());
}

TEST(arrange_act_assert, test_insufficient_minus)
{
    // Arrange
    Cash cash(1);
    // Act & Assert
    EXPECT_THROW(cash.minus(6), std::runtime_error);
    GTEST_ASSERT_EQ(1, cash.count());
}

TEST(arrange_act_assert, test_update)
{
    // Arrange
    Cash cash(5);
    // Act
    cash.plus(6);
    cash.minus(3);
    // Assert
    GTEST_ASSERT_EQ(8, cash.count());
}
