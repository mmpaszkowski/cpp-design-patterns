//
// Created by noname on 4/24/24.
//

#ifndef MINUS_EXPRESSION_H
#define MINUS_EXPRESSION_H

#include "Expression.h"
#include <memory>
#include <utility>

namespace dp
{

class MinusExpression : public Expression
{
public:
    MinusExpression(std::shared_ptr<Expression> leftExpression, std::shared_ptr<Expression> rightExpression) noexcept;
    ~MinusExpression() noexcept override;

public:
    [[nodiscard]] double      interpret() const noexcept override;
    [[nodiscard]] std::string toString() const noexcept override;

private:
    std::shared_ptr<Expression> leftExpression;
    std::shared_ptr<Expression> rightExpression;
};
} // namespace dp
#endif //MINUS_EXPRESSION_H
