//
// Created by noname on 3/29/24.
//

#ifndef HAIR_TYPE_H
#define HAIR_TYPE_H
#include <string>
#include <iostream>

namespace dp {
    enum class HairType {
        Bald,
        Short,
        Curly,
        LongStraight,
        LongCurly
    };

    std::ostream& operator << (std::ostream& os, HairType hair_type);
    [[nodiscard]] std::string toString(HairType hair_type);
}



#endif //HAIR_TYPE_H
