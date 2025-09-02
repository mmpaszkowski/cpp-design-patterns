//
// Created by Mateusz Paszkowski on 29.03.2024.
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
