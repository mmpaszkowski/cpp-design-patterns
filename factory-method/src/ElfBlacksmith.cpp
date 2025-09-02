//
// Created by Mateusz Paszkowski on 28.03.2024.
//

#include "ElfBlacksmith.h"
#include "ElfWeapon.h"
#include <memory>

namespace dp {

    [[nodiscard]] std::unique_ptr<Weapon> ElfBlacksmith::manufactureWeapon(WeaponType weaponType) const {
        return std::make_unique<ElfWeapon>(weaponType);
    }
    [[nodiscard]] std::string ElfBlacksmith::toString() const {
        return std::string{"The elf blacksmith"};
    }
}

