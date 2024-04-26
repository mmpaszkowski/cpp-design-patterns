//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <MultiplyExpression.h>
#include <NumberExpression.h>

using namespace dp;

TEST(interpreter, multiply_expression_interpret)
{
    for(int i = 0, j = 10; i < 10; i++, j--)
    {
        MultiplyExpression expression(std::make_shared<NumberExpression>(i), std::make_shared<NumberExpression>(j));
        ASSERT_EQ(static_cast<double>(i*j), expression.interpret());
        ASSERT_EQ("*", expression.toString());
    }
}