//
// Created by Mateusz Paszkowski on 24.04.2024.
//

#ifndef NUMBER_EXPRESSION_H
#define NUMBER_EXPRESSION_H

#include "Expression.h"
#include <memory>
#include <utility>

namespace dp
{

class NumberExpression : public Expression
{
public:
    explicit NumberExpression(double number) noexcept;
    explicit NumberExpression(const std::string& number);
    ~NumberExpression() noexcept override;

public:
    [[nodiscard]] double      interpret() const noexcept override;
    [[nodiscard]] std::string toString() const noexcept override;

private:
    double number;
};
} // namespace dp
#endif //NUMBER_EXPRESSION_H
