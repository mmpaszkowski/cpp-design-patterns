//
// Created by noname on 03.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_FISHING_BOAT_H
#define CPP_DESIGN_PATTERNS_FISHING_BOAT_H

#include <spdlog/spdlog.h>

using spdlog::info;

class FishingBoat {
public:
    void sail() const {
        info("The fishing boat is sailing");
    }
};

#endif //CPP_DESIGN_PATTERNS_FISHING_BOAT_H
