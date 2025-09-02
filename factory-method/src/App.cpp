//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include <utility>

#include "App.h"

#include "ElfBlacksmith.h"
#include "OrcBlacksmith.h"

using namespace dp;

void App::run() {
    const ElfBlacksmith elfBlacksmith;
    auto elfWeapon = elfBlacksmith.manufactureWeapon(WeaponType::Spear);
    std::cout << elfBlacksmith.toString() << " manufactured " << elfWeapon->toString() << std::endl;
    elfWeapon = elfBlacksmith.manufactureWeapon(WeaponType::Axe);
    std::cout << elfBlacksmith.toString() << " manufactured " << elfWeapon->toString() << std::endl;

    const OrcBlacksmith orcBlacksmith;
    auto orcWeapon = orcBlacksmith.manufactureWeapon(WeaponType::Spear);
    std::cout << orcBlacksmith.toString() << " manufactured " << orcWeapon->toString() << std::endl;
    orcWeapon = orcBlacksmith.manufactureWeapon(WeaponType::Axe);
    std::cout << orcBlacksmith.toString() << " manufactured " << orcWeapon->toString() << std::endl;
}
