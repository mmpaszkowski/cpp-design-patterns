//
// Created by Mateusz Paszkowski on 17.07.2023.
//

#include <gtest/gtest.h>
#include <OrcWeapon.h>
#include <OrcBlacksmith.h>
#include <ElfWeapon.h>
#include <ElfBlacksmith.h>

using namespace dp;

TEST(factory_method, test_orc_blacksmith_with_spear)
{
    const OrcBlacksmith blacksmith;
    const auto weapon = blacksmith.manufactureWeapon(WeaponType::Spear);
    ASSERT_TRUE(dynamic_cast<OrcWeapon*>(weapon.get()) != nullptr);
    ASSERT_EQ(WeaponType::Spear, weapon->getWeaponType());
}

TEST(factory_method, test_orc_blacksmith_with_axe)
{
    const OrcBlacksmith blacksmith;
    const auto weapon = blacksmith.manufactureWeapon(WeaponType::Axe);
    ASSERT_TRUE(dynamic_cast<OrcWeapon*>(weapon.get()) != nullptr);
    ASSERT_EQ(WeaponType::Axe, weapon->getWeaponType());
}

TEST(factory_method, test_elf_blacksmith_with_spear)
{
    const ElfBlacksmith blacksmith;
    const auto weapon = blacksmith.manufactureWeapon(WeaponType::Spear);
    ASSERT_TRUE(dynamic_cast<ElfWeapon*>(weapon.get()) != nullptr);
    ASSERT_EQ(WeaponType::Spear, weapon->getWeaponType());
}

TEST(factory_method, test_elf_blacksmith_with_axe)
{
    const ElfBlacksmith blacksmith;
    const auto weapon = blacksmith.manufactureWeapon(WeaponType::Axe);
    ASSERT_TRUE(dynamic_cast<ElfWeapon*>(weapon.get()) != nullptr);
    ASSERT_EQ(WeaponType::Axe, weapon->getWeaponType());
}
