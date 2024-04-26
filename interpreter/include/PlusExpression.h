//
// Created by noname on 4/24/24.
//

#ifndef PLUS_EXPRESSION_H
#define PLUS_EXPRESSION_H

#include "Expression.h"
#include <memory>
#include <utility>

namespace dp
{

class PlusExpression : public Expression
{
public:
    PlusExpression(std::shared_ptr<Expression> leftExpression, std::shared_ptr<Expression> rightExpression) noexcept;
    ~PlusExpression() noexcept override;

public:
    [[nodiscard]] double      interpret() const noexcept override;
    [[nodiscard]] std::string toString() const noexcept override;

private:
    std::shared_ptr<Expression> leftExpression;
    std::shared_ptr<Expression> rightExpression;
};
} // namespace dp
#endif //PLUS_EXPRESSION_H
