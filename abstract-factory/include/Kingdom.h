//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_KINGDOM_H
#define CPP_DESIGN_PATTERNS_KINGDOM_H

#include "Army.h"
#include "Castle.h"
#include "King.h"
#include "KingdomFactory.h"

enum class KingdomType
{
    Elf,
    Orc
};

class Kingdom
{
public:
    class FactoryMaker
    {
    public:
        static std::unique_ptr<KingdomFactory> makeFactory(KingdomType type);
    };

    Kingdom(std::unique_ptr<King>&& king, std::unique_ptr<Castle>&& castle, std::unique_ptr<Army>&& army);

    virtual ~Kingdom() = default;

    [[nodiscard]] const King&   getKing() const { return *this->king_; }
    [[nodiscard]] const Castle& getCastle() const { return *this->castle_; }
    [[nodiscard]] const Army&   getArmy() const { return *this->army_; }

    void                        setKing(std::unique_ptr<King>&& king) { this->king_ = std::move(king); }
    void                        setCastle(std::unique_ptr<Castle>&& castle) { this->castle_ = std::move(castle); }
    void                        setArmy(std::unique_ptr<Army>&& army) { this->army_ = std::move(army); }

private:
    std::unique_ptr<King>   king_;
    std::unique_ptr<Castle> castle_;
    std::unique_ptr<Army>   army_;
};


#endif //CPP_DESIGN_PATTERNS_KINGDOM_H
