//
// Created by Mateusz Paszkowski on 28.11.2024.
//

#ifndef SPELL_STRATEGY_H
#define SPELL_STRATEGY_H

#include <spdlog/spdlog.h>
#include "DragonSlayingStrategy.h"

namespace dp
{
class SpellStrategy : public DragonSlayingStrategy
{
public:
    ~SpellStrategy() override = default;
    void execute() const override
    { 
        spdlog::info("You cast the spell of disintegration and the dragon vaporizes in a pile of dust!");
    }
};
} // namespace dp

#endif //SPELL_STRATEGY_H
