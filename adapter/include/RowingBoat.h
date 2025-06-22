//
// Created by Mateusz Paszkowski on 03.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ROWING_BOAT_H
#define CPP_DESIGN_PATTERNS_ROWING_BOAT_H

namespace dp
{
/**
 * @class RowingBoat
 * @brief Target interface that defines the rowing behavior.
 *
 * This abstract class represents the interface expected by clients
 * that operate rowing boats.
 */
class RowingBoat
{
public:
    /**
     * @brief Virtual destructor to allow safe polymorphic deletion.
     */
    virtual ~RowingBoat() = default;

    /**
     * @brief Perform rowing operation.
     */
    virtual void row() = 0;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_ROWING_BOAT_H