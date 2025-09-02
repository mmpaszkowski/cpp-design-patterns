//
// Created by Mateusz Paszkowski on 05.04.2024.
//

#ifndef SINGLETON_FACTORY_H
#define SINGLETON_FACTORY_H

#include "ElfWeapon.h"
#include "OrcWeapon.h"
#include "WeaponType.h"
#include <memory>

namespace dp
{
class SingletonFactory
{
public:
    [[nodiscard]] ElfWeapon createElfWeapon() const noexcept;
    [[nodiscard]] OrcWeapon createOrcWeapon() const noexcept;

public:
    static const SingletonFactory& getInstance();

private:
    static std::unique_ptr<SingletonFactory> instance;
};
} // namespace dp

#endif //SINGLETON_FACTORY_H
