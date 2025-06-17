//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H
#define CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H

#include "KingdomFactory.h"
#include "OrcArmy.h"
#include "OrcCastle.h"
#include "OrcKing.h"

namespace dp
{

/**
 * @class OrcKingdomFactory
 * @brief Concrete factory for creating Orc kingdom components.
 *
 * This class implements the KingdomFactory interface to create
 * concrete instances of OrcArmy, OrcCastle, and OrcKing.
 *
 * It encapsulates the creation logic for Orc-themed kingdom parts
 * and allows clients to instantiate these parts without depending
 * on concrete classes directly.
 */
class OrcKingdomFactory : public KingdomFactory
{
public:
    /**
     * @brief Creates and returns a unique pointer to an OrcCastle.
     * @return std::unique_ptr<Castle> Unique pointer owning an OrcCastle instance.
     */
    [[nodiscard]] std::unique_ptr<Castle> createCastle() const override { return std::make_unique<OrcCastle>(); }

    /**
     * @brief Creates and returns a unique pointer to an OrcKing.
     * @return std::unique_ptr<King> Unique pointer owning an OrcKing instance.
     */
    [[nodiscard]] std::unique_ptr<King> createKing() const override { return std::make_unique<OrcKing>(); }

    /**
     * @brief Creates and returns a unique pointer to an OrcArmy.
     * @return std::unique_ptr<Army> Unique pointer owning an OrcArmy instance.
     */
    [[nodiscard]] std::unique_ptr<Army> createArmy() const override { return std::make_unique<OrcArmy>(); }
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H