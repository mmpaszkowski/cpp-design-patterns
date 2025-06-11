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

class KingdomFactory
{
public:
    virtual ~KingdomFactory()                                          = default;

    [[nodiscard]] virtual std::unique_ptr<Castle> createCastle() const = 0;
    [[nodiscard]] virtual std::unique_ptr<King>   createKing() const   = 0;
    [[nodiscard]] virtual std::unique_ptr<Army>   createArmy() const   = 0;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_KINGDOM_FACTORY_H
