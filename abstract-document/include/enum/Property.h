//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_PROPERTY_H
#define CPP_DESIGN_PATTERNS_PROPERTY_H

#include <stdexcept>
#include <string>

namespace dp
{
enum class Property
{
    PARTS,
    TYPE,
    PRICE,
    MODEL
};

std::string to_string(Property v);
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_PROPERTY_H
