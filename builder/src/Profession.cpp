//
// Created by Mateusz Paszkowski on 29.03.2024.
//

#include "Profession.h"

namespace dp {
    std::ostream& operator << (std::ostream& os, const Profession profession) {
        switch (profession) {
            case Profession::Warrior: os << "Warrior"; break;
            case Profession::Thief: os << "Thief"; break;
            case Profession::Mage: os << "Mage"; break;
            case Profession::Priest: os << "Priest"; break;
        }
        return os;
    }

    [[nodiscard]] std::string toString(const Profession profession)
    {
        switch (profession) {
            case Profession::Warrior: return std::string{"Warrior"};
            case Profession::Thief: return std::string{"Thief"};
            case Profession::Mage: return std::string{"Mage"};
            case Profession::Priest: return std::string{"Priest"};
        }
        return std::string{"Unknown"};
    }
}