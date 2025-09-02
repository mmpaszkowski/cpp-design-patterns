//
// Created by Mateusz Paszkowski on 29.03.2024.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

namespace dp {
    enum class Weapon {
        Dagger,
        Sword,
        Axe,
        Warhammer,
        Bow
    };

    std::ostream& operator << (std::ostream& os, Weapon weapon);
    [[nodiscard]] std::string toString(Weapon weapon);
}



#endif //WEAPON_H
