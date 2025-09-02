//
// Created by Mateusz Paszkowski on 28.03.2024.
//

#include "WeaponType.h"

namespace dp {

std::ostream& operator << (std::ostream& os, const WeaponType weapon_type) {

    switch (weapon_type) {
        case WeaponType::ShostSword: os << "ShostSword"; break;
        case WeaponType::Spear: os << "Spear"; break;
        case WeaponType::Axe: os << "Axe"; break;
        case WeaponType::Undefined: os << "Undefined"; break;
    }
    return os;
}

[[nodiscard]] std::string toString(const WeaponType weapon_type)
{
    switch (weapon_type) {
        case WeaponType::ShostSword: return std::string{"ShostSword"};
        case WeaponType::Spear: return std::string{"Spear"};
        case WeaponType::Axe: return std::string{"Axe"};
        case WeaponType::Undefined: return std::string{"Undefined"};
    }
    return std::string{"Undefined"};
}
}
