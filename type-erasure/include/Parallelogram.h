//
// Created by Mateusz Paszkowski on 02.12.2024.
//

#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <numbers>
#include <Shape.h>

namespace dp
{
class Parallelogram : public Shape
{
public:
    explicit constexpr Parallelogram(double w, double h) noexcept : width{w}, height{h} {}
    constexpr ~Parallelogram() noexcept override = default;
    [[nodiscard]] constexpr double getWidth() const noexcept { return width; }
    [[nodiscard]] constexpr double getHeight() const noexcept { return height; }
    [[nodiscard]] constexpr double getArea() const noexcept override { return width * height; }

private:
    double width;
    double height;
};
} // namespace dp

#endif //PARALLELOGRAM_H