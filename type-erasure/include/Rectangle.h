//
// Created by noname on 02.12.2024.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <numbers>

namespace dp
{
class Rectangle : public Shape
{
public:
    explicit constexpr Rectangle(double w, double h) noexcept : width{w}, height{h} {}
    constexpr ~Rectangle() noexcept override = default;
    [[nodiscard]] constexpr double getWidth() const noexcept { return width; }
    [[nodiscard]] constexpr double  getHeight() const noexcept { return height; }
    [[nodiscard]] constexpr double  getArea() const noexcept override { return width * height; }

private:
    double width;
    double height;
};

} // namespace dp

#endif //RECTANGLE_H
