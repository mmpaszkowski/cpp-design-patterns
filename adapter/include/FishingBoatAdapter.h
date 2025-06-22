//
// Created by Mateusz Paszkowski on 03.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_FISHING_BOAT_ADAPTER_H
#define CPP_DESIGN_PATTERNS_FISHING_BOAT_ADAPTER_H

#include "FishingBoat.h"
#include "RowingBoat.h"

namespace dp
{
/**
 * @class FishingBoatAdapter
 * @brief Adapter that allows a FishingBoat to be used where a RowingBoat is expected.
 *
 * This class adapts the interface of FishingBoat to the RowingBoat interface
 * using the Adapter Design Pattern.
 */
class FishingBoatAdapter : public RowingBoat
{
public:
    /**
     * @brief Perform the rowing operation by delegating to the FishingBoat's sail() method.
     */
    void row() override;

private:
    /// Instance of FishingBoat being adapted.
    FishingBoat boat_;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_FISHING_BOAT_ADAPTER_H