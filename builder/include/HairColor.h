//
// Created by noname on 3/29/24.
//

#ifndef HAIR_COLOR_H
#define HAIR_COLOR_H
#include <string>
#include <iostream>

namespace dp {
enum class HairColor {
    White,
    Blond,
    Red,
    Brown,
    Black
};

std::ostream& operator << (std::ostream& os, HairColor armor);
[[nodiscard]] std::string toString(HairColor armor);
}


#endif //HAIR_COLOR_H
