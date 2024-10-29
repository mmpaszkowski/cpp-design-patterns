//
// Created by noname on 23.10.2024
//

#ifndef STAR_TYPE_H
#define STAR_TYPE_H

#include <iostream>

using namespace std::literals::string_literals;

namespace dp
{
enum class StarType
{
    Sun,
    RedGiant,
    WhiteDwarf,
    Supernova,
    Dead
};

constexpr std::ostream& operator<<(std::ostream& os, const StarType starType)
{
    switch (starType)
    {
        case StarType::Sun: os << "sun"; break;
        case StarType::RedGiant: os << "red giant"; break;
        case StarType::WhiteDwarf: os << "White dwarf"; break;
        case StarType::Supernova: os << "supernova"; break;
        case StarType::Dead: os << "dead star"; break;
        default: throw std::runtime_error("Unexpected StarType enum value");
    }
    return os;
}

[[nodiscard]] constexpr std::string to_string(const StarType starType)
{
    switch (starType)
    {
        case StarType::Sun: return "sun"s;
        case StarType::RedGiant: return "red giant"s;
        case StarType::WhiteDwarf: return "white dwarf"s;
        case StarType::Supernova: return "supernova"s;
        case StarType::Dead: return "dead star"s;
        default: throw std::runtime_error("Unexpected StarType enum value");
    }
}
} // namespace dp

#endif //STAR_TYPE_H
