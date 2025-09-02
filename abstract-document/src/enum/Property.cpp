//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include "../../include/enum/Property.h"

namespace dp
{
std::string to_string(Property v)
{
    switch (v)
    {
        case Property::PARTS: return "PARTS";
        case Property::TYPE: return "TYPE";
        case Property::PRICE: return "PRICE";
        case Property::MODEL: return "MODEL";
        default: throw std::runtime_error("Property not supported.");
    }
}
} // namespace dp
