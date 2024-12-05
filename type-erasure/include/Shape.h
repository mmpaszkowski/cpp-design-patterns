//
// Created by noname on 02.12.2024.
//

#ifndef SHAPE_H
#define SHAPE_H

namespace dp
{
class Shape
{
public:
    [[nodiscard]] virtual constexpr double getArea() const noexcept = 0;
    virtual constexpr ~Shape()                                      = default;
};
} // namespace dp

#endif //SHAPE_H
