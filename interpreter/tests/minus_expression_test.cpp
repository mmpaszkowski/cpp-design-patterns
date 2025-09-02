//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>
#include <MinusExpression.h>
#include <NumberExpression.h>

using namespace dp;

TEST(interpreter, minus_expression_interpret)
{
    for(int i = 0, j = 10; i < 10; i++, j--)
    {
        MinusExpression expression(std::make_shared<NumberExpression>(i), std::make_shared<NumberExpression>(j));
        ASSERT_EQ(static_cast<double>(i-j), expression.interpret());
        ASSERT_EQ("-", expression.toString());
    }
}