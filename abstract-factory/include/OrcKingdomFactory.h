//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H
#define CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H

#include "KingdomFactory.h"
#include "OrcArmy.h"
#include "OrcCastle.h"
#include "OrcKing.h"


class OrcKingdomFactory : public KingdomFactory
{
public:
    [[nodiscard]] std::unique_ptr<Castle> createCastle() const override { return std::make_unique<OrcCastle>(); }
    [[nodiscard]] std::unique_ptr<King>   createKing() const override { return std::make_unique<OrcKing>(); }
    [[nodiscard]] std::unique_ptr<Army>   createArmy() const override { return std::make_unique<OrcArmy>(); }
};

#endif //CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H
