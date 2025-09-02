//
// Created by Mateusz Paszkowski on 28.03.2024.
//

#include "ElfWeapon.h"

namespace dp {

    ElfWeapon::~ElfWeapon() = default;

    std::string ElfWeapon::toString() const
    {
        return "an elven " + dp::toString(this->weapon_type_);
    }

    WeaponType ElfWeapon::getWeaponType() const noexcept
    {
        return this->weapon_type_;
    }

}

