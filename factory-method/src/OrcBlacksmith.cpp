//
// Created by noname on 3/28/24.
//
#include "OrcBlacksmith.h"
#include "OrcWeapon.h"
#include <memory>

namespace dp {

    [[nodiscard]] std::unique_ptr<Weapon> OrcBlacksmith::manufactureWeapon(WeaponType weaponType) const {
        return std::make_unique<OrcWeapon>(weaponType);
    }
    [[nodiscard]] std::string OrcBlacksmith::toString() const {
        return std::string{"The orc blacksmith"};
    }
}

