//
// Created by noname on 4/26/24.
//

#include "MinusExpression.h"

namespace dp
{


MinusExpression::MinusExpression(std::shared_ptr<Expression> leftExpression,
                                 std::shared_ptr<Expression> rightExpression) noexcept
    : leftExpression(std::move(leftExpression)), rightExpression(std::move(rightExpression))
{
}

MinusExpression::~MinusExpression() noexcept = default;

double MinusExpression::interpret() const noexcept
{
    return leftExpression->interpret() - rightExpression->interpret();
}
std::string MinusExpression::toString() const noexcept { return "-"; }
} // namespace dp