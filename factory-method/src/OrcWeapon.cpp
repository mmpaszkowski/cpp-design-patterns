//
// Created by Mateusz Paszkowski on 28.03.2024.
//

#include "OrcWeapon.h"

namespace dp
{

OrcWeapon::~OrcWeapon() = default;

std::string OrcWeapon::toString() const
{
    return "an orcish " + dp::toString(this->weapon_type_);
}

WeaponType OrcWeapon::getWeaponType() const noexcept
{
    return this->weapon_type_;
}
}

