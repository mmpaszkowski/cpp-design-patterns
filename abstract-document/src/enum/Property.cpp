//
// Created by noname on 02.07.23.
//

#include "../../include/enum/Property.h"

std::string to_string(Property v) {
    switch (v) {
        case Property::PARTS:
            return "PARTS";
        case Property::TYPE:
            return "TYPE";
        case Property::PRICE:
            return "PRICE";
        case Property::MODEL:
            return "MODEL";
        default:
            throw std::runtime_error("Property not supported.");
    }
}