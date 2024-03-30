//
// Created by noname on 3/29/24.
//

#include "HairType.h"

namespace dp {
    std::ostream& operator << (std::ostream& os, const HairType hair_type)
    {
        switch (hair_type) {
            case HairType::Bald: os << "Bald"; break;
            case HairType::Short: os << "Short"; break;
            case HairType::Curly: os << "Curly"; break;
            case HairType::LongStraight: os << "LongStraight"; break;
            case HairType::LongCurly: os << "LongCurly"; break;
            default: os << "Unknown"; break;
        }
        return os;
    }

    [[nodiscard]] std::string toString(const HairType hair_type)
    {
        switch (hair_type) {
            case HairType::Bald: return std::string{"Bald"};
            case HairType::Short: return std::string{"Short"};
            case HairType::Curly: return std::string{"Curly"};
            case HairType::LongStraight: return std::string{"LongStraight"};
            case HairType::LongCurly: return std::string{"LongCurly"};
        }
        return std::string{"Unknown"};
    }
}