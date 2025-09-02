//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include "App.h"

#include "SingletonFactory.h"

using namespace dp;

void App::run() const
{
    const SingletonFactory& factory = SingletonFactory::getInstance();
    ElfWeapon elfWeapon = std::move(factory.createElfWeapon());
    OrcWeapon orcWeapon = std::move(factory.createOrcWeapon());

    std::cout << "Created elf weapon: " << elfWeapon.getWeaponType() << std::endl;
    std::cout << "Created orc weapon: " << orcWeapon.getWeaponType() << std::endl;
}
