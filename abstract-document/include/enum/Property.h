//
// Created by noname on 01.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_PROPERTY_H
#define CPP_DESIGN_PATTERNS_PROPERTY_H

#include <string>
#include <stdexcept>

enum class Property {
    PARTS, TYPE, PRICE, MODEL
};

std::string to_string(Property v);

#endif //CPP_DESIGN_PATTERNS_PROPERTY_H
