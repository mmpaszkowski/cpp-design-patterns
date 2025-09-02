//
// Created by Mateusz Paszkowski on 24.04.2024.
//

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

namespace dp
{

class Expression
{
public:
    virtual ~Expression() noexcept                               = default;
    [[nodiscard]] virtual double      interpret() const noexcept = 0;
    [[nodiscard]] virtual std::string toString() const noexcept  = 0;
};


} // namespace dp

#endif //EXPRESSION_H
