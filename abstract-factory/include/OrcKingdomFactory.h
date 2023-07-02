//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H
#define CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H

#include "KingdomFactory.h"
#include "OrcCastle.h"
#include "OrcKing.h"
#include "OrcArmy.h"


class OrcKingdomFactory : public KingdomFactory {
public:
    [[nodiscard]] Castle *createCastle() const override {
        return new OrcCastle();
    }

    [[nodiscard]] King *createKing() const override {
        return new OrcKing();
    }

    [[nodiscard]] Army *createArmy() const override {
        return new OrcArmy();
    }
};

#endif //CPP_DESIGN_PATTERNS_ORC_KINGDOM_FACTORY_H
