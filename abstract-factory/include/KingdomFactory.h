//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_KINGDOM_FACTORY_H
#define CPP_DESIGN_PATTERNS_KINGDOM_FACTORY_H

#include <memory>

namespace dp
{

class Army;
class Castle;
class King;

/**
 * @class KingdomFactory
 * @brief Abstract factory interface for creating kingdom components.
 *
 * Provides factory methods to create instances of Castle, King, and Army.
 * Concrete factories should implement these methods to produce specific kingdom elements.
 */
class KingdomFactory
{
public:
    /// Virtual destructor for proper cleanup in derived classes.
    virtual ~KingdomFactory() = default;

    /**
     * @brief Creates a new Castle instance.
     * @return std::unique_ptr<Castle> The created Castle object.
     */
    [[nodiscard]] virtual std::unique_ptr<Castle> createCastle() const = 0;

    /**
     * @brief Creates a new King instance.
     * @return std::unique_ptr<King> The created King object.
     */
    [[nodiscard]] virtual std::unique_ptr<King> createKing() const = 0;

    /**
     * @brief Creates a new Army instance.
     * @return std::unique_ptr<Army> The created Army object.
     */
    [[nodiscard]] virtual std::unique_ptr<Army> createArmy() const = 0;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_KINGDOM_FACTORY_H