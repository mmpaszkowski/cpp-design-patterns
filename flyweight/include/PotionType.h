//
// Created by noname on 4/17/24.
//

#ifndef POTION_TYPE_H
#define POTION_TYPE_H

#include <iostream>
#include <string>

namespace dp
{
enum class PotionType
{
    Healing,
    Invisibility,
    Strength,
    HolyWater,
    Poison
};

using namespace std::literals::string_literals;

constexpr std::ostream& operator<<(std::ostream& os, const PotionType potion_type)
{
    switch (potion_type)
    {
        case PotionType::Healing: os << "Healing"; break;
        case PotionType::Invisibility: os << "Invisibility"; break;
        case PotionType::Strength: os << "Strength"; break;
        case PotionType::HolyWater: os << "HolyWater"; break;
        case PotionType::Poison: os << "Poison"; break;
        default: os << "Undefined"; break;
    }
    return os;
}

[[nodiscard]] constexpr std::string toString(const PotionType potion_type)
{
    switch (potion_type)
    {
        case PotionType::Healing: return "Healing"s;
        case PotionType::Invisibility: return "Invisibility"s;
        case PotionType::Strength: return "Strength"s;
        case PotionType::HolyWater: return "HolyWater"s;
        case PotionType::Poison: return "Poison"s;
        default: return "Undefined"s;
    }
}
} // namespace dp

#endif //POTION_TYPE_H
