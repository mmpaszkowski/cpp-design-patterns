//
// Created by Mateusz Paszkowski on 02.09.2025.
//

#include <gtest/gtest.h>
#include <Cash.h>
#include <stdexcept>

TEST(CashBDD, given_initial_amount_when_plus_then_sum_matches)
{
    // Given
    Cash cash(3);
    // When
    cash.plus(4);
    // Then
    EXPECT_EQ(7, cash.count());
}

TEST(CashBDD, given_sufficient_funds_when_minus_then_decreases)
{
    // Given
    Cash cash(8);
    // When / Then
    ASSERT_NO_THROW(cash.minus(5));
    EXPECT_EQ(3, cash.count());
}

TEST(CashBDD, given_insufficient_funds_when_minus_then_throws)
{
    // Given
    Cash cash(1);
    // When / Then
    EXPECT_THROW(cash.minus(6), std::runtime_error);
    EXPECT_EQ(1, cash.count());
}

TEST(CashBDD, given_cash_when_updated_then_reflects_changes)
{
    // Given
    Cash cash(5);
    // When
    cash.plus(6);
    ASSERT_NO_THROW(cash.minus(3));
    // Then
    EXPECT_EQ(8, cash.count());
}

