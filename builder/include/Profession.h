//
// Created by noname on 3/29/24.
//

#ifndef PROFESSION_H
#define PROFESSION_H

#include <string>
#include <iostream>

namespace dp {
    enum class Profession {
        Warrior,
        Thief,
        Mage,
        Priest
    };

    std::ostream& operator << (std::ostream& os, Profession profession);
    [[nodiscard]] std::string toString(Profession profession);
}



#endif //PROFESSION_H
