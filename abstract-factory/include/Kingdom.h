//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_KINGDOM_H
#define CPP_DESIGN_PATTERNS_KINGDOM_H

#include <stdexcept>

#include "King.h"
#include "Castle.h"
#include "Army.h"
#include "KingdomFactory.h"
#include "ElfKingdomFactory.h"
#include "OrcKingdomFactory.h"

enum class KingdomType {
    ELF, ORC
};

class Kingdom {
public:
    class FactoryMaker {
    public:
        static KingdomFactory *makeFactory(KingdomType type);
    };

    Kingdom() noexcept : king(nullptr), castle(nullptr), army(nullptr) {}

    virtual ~Kingdom() {
        delete king;
        delete castle;
        delete army;
    }

    [[nodiscard]] King   *getKing()   const { return this->king; }
    [[nodiscard]] Castle *getCastle() const { return this->castle; }
    [[nodiscard]] Army   *getArmy()   const { return this->army; }

    void setKing  (King *pKing)     { this->king = pKing; }
    void setCastle(Castle *pCastle) { this->castle = pCastle; }
    void setArmy  (Army *pArmy)     { this->army = pArmy; }

private:
    King *king;
    Castle *castle;
    Army *army;
};


#endif //CPP_DESIGN_PATTERNS_KINGDOM_H
