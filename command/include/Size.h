//
// Created by noname on 4/8/24.
//

#ifndef SIZE_H
#define SIZE_H

#include <iostream>

using namespace std::literals::string_literals;

namespace dp
{
enum class Size
{
    Small,
    Normal,
};

constexpr std::ostream& operator<<(std::ostream& os, const Size size)
{
    switch (size)
    {
        case Size::Small: os << "Small"; break;
        case Size::Normal: os << "Normal"; break;
        default: throw std::runtime_error("Unexpected Size enum value");
    }
    return os;
}

[[nodiscard]] constexpr std::string toString(const Size size)
{
    switch (size)
    {
        case Size::Small: return "Small"s;
        case Size::Normal: return "Normal"s;

        default: throw std::runtime_error("Unexpected Size enum value");
    }
}
} // namespace dp

#endif //SIZE_H
