//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "Hero.h"

using namespace dp;

void App::run() const {
    Hero mage = Hero::Builder("Riobard", Profession::Mage)
    .withHairColor(HairColor::Black)
    .withWeapon(Weapon::Dagger)
    .build();
    std::cout << mage.toString() << std::endl;

    Hero warrior = Hero::Builder("Amberjill", Profession::Warrior)
    .withHairColor(HairColor::Blond)
    .withHairType(HairType::LongCurly).withArmor(Armor::ChainMail).withWeapon(Weapon::Sword)
    .build();
    std::cout << warrior.toString() << std::endl;

    Hero thief = Hero::Builder("Desmond", Profession::Thief)
        .withHairType(HairType::Bald)
        .withWeapon(Weapon::Bow)
        .build();
    std::cout << thief.toString() << std::endl;
}
