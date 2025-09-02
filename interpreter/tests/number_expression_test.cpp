//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>
#include <NumberExpression.h>

using namespace dp;

TEST(interpreter, number_expression_interpret)
{
    for(int i = 0; i < 10; i++)
    {
        NumberExpression expression(static_cast<double>(i));
        ASSERT_EQ(static_cast<double>(i), expression.interpret());
        ASSERT_EQ("number", expression.toString());
    }
    for(int i = 0; i < 10; i++)
    {
        NumberExpression expression(std::to_string(static_cast<double>(i)));
        ASSERT_EQ(static_cast<double>(i), expression.interpret());
        ASSERT_EQ("number", expression.toString());
    }
}