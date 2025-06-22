//
// Created by Mateusz Paszkowski on 03.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_FISHING_BOAT_H
#define CPP_DESIGN_PATTERNS_FISHING_BOAT_H

#include <spdlog/spdlog.h>

namespace dp
{
/**
 * @class FishingBoat
 * @brief Adaptee class that provides sailing functionality.
 *
 * This class simulates a fishing boat that can sail but does not
 * implement the RowingBoat interface directly.
 */
class FishingBoat
{
public:
    /**
     * @brief Virtual destructor for safe inheritance.
     */
    virtual ~FishingBoat() = default;

    /**
     * @brief Simulates sailing operation.
     */
    virtual void sail() const;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_FISHING_BOAT_H