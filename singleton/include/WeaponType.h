//
// Created by Mateusz Paszkowski on 28.03.2024.
//

#ifndef WEAPON_TYPE_H
#define WEAPON_TYPE_H

#include <iostream>
#include <string>

namespace dp
{
using namespace std::literals::string_literals;

enum class WeaponType
{
    ShortSword,
    Spear,
    Axe,
    Undefined
};

constexpr std::ostream& operator<<(std::ostream& os, const WeaponType weapon_type)
{
    switch (weapon_type)
    {
        case WeaponType::ShortSword: os << "ShortSword"; break;
        case WeaponType::Spear: os << "Spear"; break;
        case WeaponType::Axe: os << "Axe"; break;
        default: os << "Undefined"; break;
    }
    return os;
}

[[nodiscard]] constexpr std::string toString(const WeaponType weapon_type)
{
    switch (weapon_type)
    {
        case WeaponType::ShortSword: return "ShortSword"s;
        case WeaponType::Spear: return "Spear"s;
        case WeaponType::Axe: return "Axe"s;
        default: return "Undefined"s;
    }
}
} // namespace dp

#endif //WEAPON_TYPE_H
