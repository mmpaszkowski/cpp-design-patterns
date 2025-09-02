//
// Created by Mateusz Paszkowski on 29.03.2024.
//

#include "Armor.h"

namespace dp {
    std::ostream& operator << (std::ostream& os, const Armor armor) {
        switch (armor) {
            case Armor::Clothes: os << "Clothes"; break;
            case Armor::Leather: os << "Leather"; break;
            case Armor::ChainMail: os << "ChainMail"; break;
            case Armor::PlateMail: os << "PlateMail"; break;
        }
        return os;
    }

    [[nodiscard]] std::string toString(const Armor armor)
    {
        switch (armor) {
            case Armor::Clothes: return std::string{"Clothes"};
            case Armor::Leather: return std::string{"Leather"};
            case Armor::ChainMail: return std::string{"ChainMail"};
            case Armor::PlateMail: return std::string{"PlateMail"};
        }
        return std::string{"Unknown"};
    }
}