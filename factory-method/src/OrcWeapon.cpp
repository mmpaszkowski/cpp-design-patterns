//
// Created by noname on 3/28/24.
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

