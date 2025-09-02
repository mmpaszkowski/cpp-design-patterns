//
// Created by Mateusz Paszkowski on 29.03.2024.
//

#ifndef ARMOR_H
#define ARMOR_H

#include <iostream>
#include <string>

namespace dp
{
enum class Armor
{
    Clothes,
    Leather,
    ChainMail,
    PlateMail
};

std::ostream&             operator<<(std::ostream& os, Armor armor);
[[nodiscard]] std::string toString(Armor armor);
} // namespace dp


#endif //ARMOR_H
