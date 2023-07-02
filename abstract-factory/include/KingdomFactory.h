//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_KINGDOM_FACTORY_H
#define CPP_DESIGN_PATTERNS_KINGDOM_FACTORY_H

#include "Castle.h"
#include "King.h"
#include "Army.h"

class KingdomFactory
{
public:
    [[nodiscard]] virtual Castle* createCastle() const = 0;
    [[nodiscard]] virtual King* createKing() const = 0;
    [[nodiscard]] virtual Army* createArmy() const = 0;
};

#endif //CPP_DESIGN_PATTERNS_KINGDOM_FACTORY_H
