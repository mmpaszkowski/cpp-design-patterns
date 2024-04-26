//
// Created by noname on 4/26/24.
//

#include "PlusExpression.h"

namespace dp
{

PlusExpression::PlusExpression(std::shared_ptr<Expression> leftExpression,
                               std::shared_ptr<Expression> rightExpression) noexcept
    : leftExpression(std::move(leftExpression)), rightExpression(std::move(rightExpression))
{
}
PlusExpression::~PlusExpression() noexcept = default;

double PlusExpression::interpret() const noexcept { return leftExpression->interpret() + rightExpression->interpret(); }
std::string PlusExpression::toString() const noexcept { return "+"; }
} // namespace dp