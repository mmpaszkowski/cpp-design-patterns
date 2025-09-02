//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>
#include <Cash.h>
#include <stdexcept>

TEST(arrange_act_assert, test_cash)
{
    Cash cash(3);
    cash.plus(4);
    ASSERT_EQ(7, cash.count());

    cash = Cash(8);
    cash.minus(5);
    ASSERT_EQ(3, cash.count());
    EXPECT_THROW(cash.minus(6), std::runtime_error);
    ASSERT_EQ(3, cash.count());

    cash.plus(5);
    cash.minus(5);
    ASSERT_EQ(3, cash.count());
}
