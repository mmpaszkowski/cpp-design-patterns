//
// Created by Mateusz Paszkowski on 30.03.2024.
//

#ifndef HERO_H
#define HERO_H

#include <string>
#include <optional>

#include "Profession.h"
#include "HairType.h"
#include "HairColor.h"
#include "Armor.h"
#include "Weapon.h"

namespace dp {
class Hero {
public:
    class Builder {
    public:
        explicit Builder(const std::string& name, const Profession profession) : name_(name), profession_(profession) { }

        Builder& withHairType(HairType hairType);
        Builder& withHairColor(const HairColor hairColor);
        Builder& withArmor(const Armor armor);
        Builder& withWeapon(Weapon weapon);

        Hero build() const;
    private:
        std::string name_;
        Profession profession_;
        std::optional<HairType> hairType_;
        std::optional<HairColor> hairColor_;
        std::optional<Armor> armor_;
        std::optional<Weapon> weapon_;
    };

public:
    constexpr Hero(const std::string& name, const Profession profession) : name_(name), profession_(profession), hairType_(HairType::Bald), hairColor_(HairColor::Black), armor_(Armor::Clothes), weapon_(Weapon::Axe) { }

    std::string toString() const;

    friend class Builder;

private:
    std::string name_;

public:
    [[nodiscard]] const std::string& getName() const {
        return name_;
    }

    [[nodiscard]] Profession getProfession() const {
        return profession_;
    }

    [[nodiscard]] HairType getHairType() const {
        return hairType_;
    }

    [[nodiscard]] HairColor getHairColor() const {
        return hairColor_;
    }

    [[nodiscard]] Armor getArmor() const {
        return armor_;
    }

    [[nodiscard]] Weapon getWeapon() const {
        return weapon_;
    }

private:
    Profession profession_;
    HairType hairType_;
    HairColor hairColor_;
    Armor armor_;
    Weapon weapon_;
};
}



#endif //HERO_H
