//
// Created by Mateusz Paszkowski on 05.04.2024.
//

#include "SingletonFactory.h"

namespace dp
{
    std::unique_ptr<SingletonFactory> SingletonFactory::instance = nullptr;

    ElfWeapon     SingletonFactory::createElfWeapon() const noexcept { return ElfWeapon(WeaponType::ShortSword); }
    OrcWeapon     SingletonFactory::createOrcWeapon() const noexcept { return OrcWeapon(WeaponType::Axe); }

    const SingletonFactory& SingletonFactory::getInstance()
    {
        if (instance == nullptr)
            instance = std::make_unique<SingletonFactory>();
        return *instance;
    }
}

