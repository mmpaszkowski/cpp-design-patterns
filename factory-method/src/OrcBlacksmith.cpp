//
// Created by Mateusz Paszkowski on 28.03.2024.
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

