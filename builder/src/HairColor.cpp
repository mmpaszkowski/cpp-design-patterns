//
// Created by noname on 3/29/24.
//

#include "HairColor.h"

namespace dp {
std::ostream& operator << (std::ostream& os, HairColor hair_color)
    {
        switch (hair_color) {
            case HairColor::White: os << "White"; break;
            case HairColor::Blond: os << "Blond"; break;
            case HairColor::Red: os << "Red"; break;
            case HairColor::Brown: os << "Brown"; break;
            case HairColor::Black: os << "Black"; break;
            default: os << "Unknown"; break;
        }
        return os;
    }

    [[nodiscard]] std::string toString(HairColor hair_color)
    {
        switch (hair_color) {
            case HairColor::White: return std::string{"White"};
            case HairColor::Blond: return std::string{"Blond"};
            case HairColor::Red: return std::string{"Red"};
            case HairColor::Brown: return std::string{"Brown"};
            case HairColor::Black: return std::string{"Black"};
        }
        return std::string{"Unknown"};
    }
}