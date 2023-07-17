//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <Cash.h>

TEST(arrange_act_assert, test_cash)
{
    //initialize
    Cash cash(3);
    //test plus
    cash.plus(4);
    ASSERT_EQ(7, cash.count());
    //test minus
    cash = Cash(8);
    ASSERT_TRUE(cash.minus(5));
    ASSERT_EQ(3, cash.count());
    ASSERT_FALSE(cash.minus(6));
    ASSERT_EQ(3, cash.count());
    //test update
    cash.plus(5);
    ASSERT_TRUE(cash.minus(5));
    ASSERT_EQ(3, cash.count());
}
