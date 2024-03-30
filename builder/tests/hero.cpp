//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <Hero.h>

using namespace dp;

TEST(builder, build_hero)
{
    const std::string heroName = "Sir Lancelot";

    const Hero hero = Hero::Builder(heroName, Profession::Warrior)
        .withArmor(Armor::ChainMail)
        .withWeapon(Weapon::Sword)
        .withHairType(HairType::LongCurly)
        .withHairColor(HairColor::Blond)
        .build();

    ASSERT_EQ("Sir Lancelot Warrior LongCurly Blond ChainMail Sword", hero.toString());
    ASSERT_EQ(Profession::Warrior, hero.getProfession());
    ASSERT_EQ(heroName, hero.getName());
    ASSERT_EQ(Armor::ChainMail, hero.getArmor());
    ASSERT_EQ(Weapon::Sword, hero.getWeapon());
    ASSERT_EQ(HairType::LongCurly, hero.getHairType());
    ASSERT_EQ(HairColor::Blond, hero.getHairColor());
}