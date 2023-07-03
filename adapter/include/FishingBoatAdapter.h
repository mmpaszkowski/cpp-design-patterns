//
// Created by noname on 03.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_FISHING_BOAT_ADAPTER_H
#define CPP_DESIGN_PATTERNS_FISHING_BOAT_ADAPTER_H

#include "RowingBoat.h"
#include "FishingBoat.h"

class FishingBoatAdapter : public RowingBoat {

private:
    FishingBoat boat;

public:
    void row() override {
        boat.sail();
    }
};

#endif //CPP_DESIGN_PATTERNS_FISHING_BOAT_ADAPTER_H
