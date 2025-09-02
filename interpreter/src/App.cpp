//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include <utility>

#include "App.h"

#include "MinusExpression.h"
#include "MultiplyExpression.h"
#include "NumberExpression.h"
#include "PlusExpression.h"
#include <spdlog/spdlog.h>
#include <stack>
#include <vector>

using namespace dp;

bool isOperator(const std::string& token) { return token == "+" || token == "-" || token == "*"; }
std::shared_ptr<Expression> getOperatorInstance(const std::string&          token,
                                                std::shared_ptr<Expression> left,
                                                std::shared_ptr<Expression> right)
{
    if (token == "+")
        return std::make_shared<PlusExpression>(left, right);
    if (token == "-")
        return std::make_shared<MinusExpression>(left, right);
    return std::make_shared<MultiplyExpression>(left, right);
};

void App::run() const
{
    //    std::string                             token_string = "4 3 2 - 1 + *";
    std::vector<std::string>                tokens{"4", "3", "2", "-", "1", "+", "*"};

    std::stack<std::shared_ptr<Expression>> stack;

    for (const std::string& token : tokens)
    {
        if (isOperator(token))
        {
            // when an operator is encountered we expect that the numbers can be popped from the top of
            // the stack
            auto rightExpression = stack.top();
            stack.pop();

            auto leftExpression = stack.top();
            stack.pop();
            spdlog::info("popped from stack left: " + std::to_string(leftExpression->interpret()) +
                         " right: " + std::to_string(rightExpression->interpret()));
            auto operator_instance = getOperatorInstance(token, leftExpression, rightExpression);
            spdlog::info("operator: " + operator_instance->toString());
            auto result = operator_instance->interpret();
            // the operation result is pushed on top of the stack
            auto resultExpression = std::make_shared<NumberExpression>(result);
            stack.push(resultExpression);
            spdlog::info("push result to stack: " + std::to_string(resultExpression->interpret()));
        }
        else
        {
            // numbers are pushed on top of the stack
            auto i = std::make_shared<NumberExpression>(token);
            stack.push(i);
            spdlog::info("push to stack: " + std::to_string(i->interpret()));
        }
    }
}
