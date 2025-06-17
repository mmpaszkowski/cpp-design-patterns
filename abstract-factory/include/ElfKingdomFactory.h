//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_KINGDOM_FACTORY_H
#define CPP_DESIGN_PATTERNS_ELF_KINGDOM_FACTORY_H

#include "ElfArmy.h"
#include "ElfCastle.h"
#include "ElfKing.h"
#include "KingdomFactory.h"

namespace dp
{

/**
 * @class ElfKingdomFactory
 * @brief Concrete factory that creates Elf kingdom components.
 *
 * Implements the Abstract Factory pattern to produce Elf variants of Castle, King, and Army.
 */
class ElfKingdomFactory : public KingdomFactory
{
public:
    /**
     * @brief Creates an ElfCastle instance.
     *
     * @return A unique_ptr to the created ElfCastle.
     */
    [[nodiscard]] std::unique_ptr<Castle> createCastle() const override { return std::make_unique<ElfCastle>(); }

    /**
     * @brief Creates an ElfKing instance.
     *
     * @return A unique_ptr to the created ElfKing.
     */
    [[nodiscard]] std::unique_ptr<King> createKing() const override { return std::make_unique<ElfKing>(); }

    /**
     * @brief Creates an ElfArmy instance.
     *
     * @return A unique_ptr to the created ElfArmy.
     */
    [[nodiscard]] std::unique_ptr<Army> createArmy() const override { return std::make_unique<ElfArmy>(); }
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_ELF_KINGDOM_FACTORY_H