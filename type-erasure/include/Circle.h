//
// Created by noname on 02.12.2024.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <numbers>

namespace dp
{
class Circle : public Shape
{
public:
    constexpr explicit Circle(double rad) noexcept : radius{rad} {}
    constexpr ~Circle() noexcept override = default;
    [[nodiscard]] constexpr double getRadius() const noexcept { return radius; }
    [[nodiscard]] constexpr double getArea() const noexcept { return std::numbers::pi * radius * radius; }

private:
    double radius;
};

} // namespace dp

#endif //CIRCLE_H
