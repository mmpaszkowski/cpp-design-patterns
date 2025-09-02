//
// Created by Mateusz Paszkowski on 29.03.2024.
//

#include "Weapon.h"

namespace dp {
    std::ostream& operator << (std::ostream& os, const Weapon weapon) {
        switch (weapon) {
            case Weapon::Dagger: os << "Dagger"; break;
            case Weapon::Sword: os << "Sword"; break;
            case Weapon::Axe: os << "Axe"; break;
            case Weapon::Warhammer: os << "Warhammer"; break;
            case Weapon::Bow: os << "Priest"; break;
        }
        return os;
    }

    [[nodiscard]] std::string toString(const Weapon weapon)
    {
        switch (weapon) {
            case Weapon::Dagger: return std::string{"Dagger"};
            case Weapon::Sword: return std::string{"Sword"};
            case Weapon::Axe: return std::string{"Axe"};
            case Weapon::Warhammer: return std::string{"Warhammer"};
            case Weapon::Bow: return std::string{"Bow"};
        }
        return std::string{"Unknown"};
    }
}