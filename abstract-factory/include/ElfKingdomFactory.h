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
class ElfKingdomFactory : public KingdomFactory
{
public:
    [[nodiscard]] std::unique_ptr<Castle> createCastle() const override { return std::make_unique<ElfCastle>(); }
    [[nodiscard]] std::unique_ptr<King>   createKing() const override { return std::make_unique<ElfKing>(); }
    [[nodiscard]] std::unique_ptr<Army>   createArmy() const override { return std::make_unique<ElfArmy>(); }
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_ELF_KINGDOM_FACTORY_H
