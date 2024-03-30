//
// Created by noname on 3/29/24.
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
