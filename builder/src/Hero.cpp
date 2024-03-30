//
// Created by noname on 3/30/24.
//

#ifndef HERO_CPP_
#define HERO_CPP_

#include "Hero.h"

namespace dp {

    Hero::Builder& Hero::Builder::withHairType(const HairType hairType) {
        this->hairType_ = hairType;
        return *this;
    }

    Hero::Builder& Hero::Builder::withHairColor(const HairColor hairColor) {
        this->hairColor_ = hairColor;
        return *this;
    }

    Hero::Builder& Hero::Builder::withArmor(const Armor armor) {
        this->armor_ = armor;
        return *this;
    }

    Hero::Builder& Hero::Builder::withWeapon(const Weapon weapon) {
        this->weapon_ = weapon;
        return *this;
    }

    Hero Hero::Builder::build() const {
        Hero result(name_, profession_);
        if(hairType_)
            result.hairType_ = this->hairType_.value();
        if(hairColor_)
            result.hairColor_ = this->hairColor_.value();
        if(armor_)
            result.armor_ = this->armor_.value();
        if(weapon_)
            result.weapon_ = this->weapon_.value();

        return result;
    }

    std::string Hero::toString() const {
        return this->name_ + " " + dp::toString(this->profession_) + " " + dp::toString(this->hairType_) + " " + dp::toString(this->hairColor_) + " " + dp::toString(this->armor_) + " " + dp::toString(this->weapon_);
    }
}

#endif //HERO_CPP_
