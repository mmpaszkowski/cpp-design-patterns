//
// Created by noname on 4/26/24.
//

#include "MultiplyExpression.h"

namespace dp
{

MultiplyExpression::MultiplyExpression(std::shared_ptr<Expression> leftExpression,
                                       std::shared_ptr<Expression> rightExpression) noexcept
    : leftExpression(std::move(leftExpression)), rightExpression(std::move(rightExpression))
{
}
MultiplyExpression::~MultiplyExpression() noexcept = default;
double MultiplyExpression::interpret() const noexcept
{
    return leftExpression->interpret() * rightExpression->interpret();
}
std::string MultiplyExpression::toString() const noexcept { return "*"; }
} // namespace dp