//
// Created by Mateusz Paszkowski on 02.12.2024.
//

#ifndef SQUARE_H
#define SQUARE_H

#include <numbers>
#include "Shape.h"

namespace dp
{
class Square : public Shape
{
public:
    explicit constexpr Square(double s) noexcept : side{s} {}
    constexpr ~Square() noexcept override = default;
    [[nodiscard]] double getSide() const noexcept { return side; }
    [[nodiscard]] double getArea() const noexcept override { return side * side; }

private:
    double side;
};
} // namespace dp

#endif //SQUARE_H
