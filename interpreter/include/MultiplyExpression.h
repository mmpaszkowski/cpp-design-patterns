//
// Created by noname on 4/24/24.
//

#ifndef MULTIPLY_EXPRESSION_H
#define MULTIPLY_EXPRESSION_H

#include "Expression.h"
#include <memory>
#include <utility>

namespace dp
{
class MultiplyExpression : public Expression
{
public:
    MultiplyExpression(std::shared_ptr<Expression> leftExpression,
                       std::shared_ptr<Expression> rightExpression) noexcept;
    ~MultiplyExpression() noexcept override;

public:
    [[nodiscard]] double      interpret() const noexcept override;
    [[nodiscard]] std::string toString() const noexcept override;

private:
    std::shared_ptr<Expression> leftExpression;
    std::shared_ptr<Expression> rightExpression;
};
} // namespace dp
#endif //MULTIPLY_EXPRESSION_H
