//
// Created by noname on 4/24/24.
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
