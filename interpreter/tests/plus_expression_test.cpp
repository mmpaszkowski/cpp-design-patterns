//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <PlusExpression.h>
#include <NumberExpression.h>

using namespace dp;

TEST(interpreter, plus_expression_interpret)
{
    for(int i = 0, j = 10; i < 10; i++, j--)
    {
        PlusExpression expression(std::make_shared<NumberExpression>(i), std::make_shared<NumberExpression>(j));
        ASSERT_EQ(10.0, expression.interpret());
        ASSERT_EQ("+", expression.toString());
    }
}