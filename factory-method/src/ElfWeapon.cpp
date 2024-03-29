//
// Created by noname on 3/28/24.
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

