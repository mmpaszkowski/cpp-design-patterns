//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_KINGDOM_FACTORY_H
#define CPP_DESIGN_PATTERNS_ELF_KINGDOM_FACTORY_H

#include "KingdomFactory.h"
#include "ElfCastle.h"
#include "ElfKing.h"
#include "ElfArmy.h"

class ElfKingdomFactory : public KingdomFactory {

public:
    [[nodiscard]] Castle* createCastle() const override {
        return new ElfCastle();
    }

    [[nodiscard]] King* createKing() const override {
        return new ElfKing();
    }

    [[nodiscard]] Army* createArmy() const override {
        return new ElfArmy();
    }
};

#endif //CPP_DESIGN_PATTERNS_ELF_KINGDOM_FACTORY_H
