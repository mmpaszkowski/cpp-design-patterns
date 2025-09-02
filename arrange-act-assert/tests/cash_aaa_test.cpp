//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>
#include <Cash.h>

TEST(arrange_act_assert, test_plus)
{
    //Arrange
    Cash cash(3);
    //Act
    cash.plus(4);
    //Assert
    GTEST_ASSERT_EQ(7, cash.count());
}

TEST(arrange_act_assert, test_minus)
{
    Cash cash(8);
    //Act
    bool result = cash.minus(5);
    //Assert
    ASSERT_TRUE(result);
    GTEST_ASSERT_EQ(3, cash.count());
}

TEST(arrange_act_assert, test_insufficient_minus)
{
    Cash cash(1);
    //Act
    bool result = cash.minus(6);
    //Assert
    ASSERT_FALSE(result);
    GTEST_ASSERT_EQ(1, cash.count());
}

TEST(arrange_act_assert, test_update)
{
    //Arrange
    Cash cash(5);
    //Act
    cash.plus(6);
    bool result = cash.minus(3);
    //Assert
    ASSERT_TRUE(result);
    GTEST_ASSERT_EQ(8, cash.count());
}