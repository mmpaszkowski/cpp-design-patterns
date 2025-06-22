//
// Created by Mateusz Paszkowski on 03.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_CAPTAIN_H
#define CPP_DESIGN_PATTERNS_CAPTAIN_H

#include "RowingBoat.h"
#include <memory>

namespace dp
{
/**
 * @class Captain
 * @brief Client class that operates on the RowingBoat interface.
 *
 * The Captain does not care about the concrete implementation of RowingBoat.
 * It works with any object that implements RowingBoat, including adapters.
 */
class Captain
{
public:
    /**
     * @brief Constructor that injects a RowingBoat dependency.
     * @param rowingBoat Unique ownership of RowingBoat instance.
     */
    explicit Captain(std::unique_ptr<RowingBoat> rowingBoat);

    /**
     * @brief Deleted copy constructor to prevent copying.
     */
    Captain(const Captain&) = delete;

    /**
     * @brief Deleted copy assignment operator to prevent copying.
     */
    Captain& operator=(const Captain&) = delete;

    /**
     * @brief Default move constructor.
     */
    Captain(Captain&&) = default;

    /**
     * @brief Default move assignment operator.
     */
    Captain& operator=(Captain&&) = default;

    /**
     * @brief Virtual destructor.
     */
    virtual ~Captain() = default;

    /**
     * @brief Perform rowing action.
     *
     * Delegates the rowing operation to the underlying RowingBoat instance.
     */
    virtual void row();

private:
    /// Owned RowingBoat instance.
    std::unique_ptr<RowingBoat> rowingBoat_;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_CAPTAIN_H