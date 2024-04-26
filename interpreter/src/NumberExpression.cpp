//
// Created by noname on 4/26/24.
//

#include "NumberExpression.h"

namespace dp
{

NumberExpression::NumberExpression(double number) noexcept : number(number) {}
NumberExpression::NumberExpression(const std::string& number) : number(std::stod(number)) {}
NumberExpression::~NumberExpression() noexcept = default;
double NumberExpression::interpret() const noexcept { return number; }
std::string NumberExpression::toString() const noexcept { return "number"; }
} // namespace dp