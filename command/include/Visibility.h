//
// Created by noname on 4/8/24.
//

#ifndef VISIBILITY_H
#define VISIBILITY_H

#include <iostream>
namespace dp
{
using std::literals::string_literals::operator""s;

enum class Visibility
{
    Visible,
    Invisible,
};

constexpr std::ostream& operator<<(std::ostream& os, const Visibility visibility)
{
    switch (visibility)
    {
        case Visibility::Visible: os << "Visible"; break;
        case Visibility::Invisible: os << "Invisible"; break;
        default: throw std::runtime_error("Unexpected Visibility enum value");
    }
    return os;
}

[[nodiscard]] constexpr std::string toString(const Visibility visibility)
{
    switch (visibility)
    {
        case Visibility::Visible: return "Visible"s;
        case Visibility::Invisible: return "Invisible"s;
        default: throw std::runtime_error("Unexpected Visibility enum value");
    }
}
} // namespace dp

#endif //VISIBILITY_H
