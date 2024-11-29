//
// Created by Mateusz Paszkowski on 28.11.2024.
//

#ifndef MELEE_STRATEGY_H
#define MELEE_STRATEGY_H

#include <spdlog/spdlog.h>
#include "DragonSlayingStrategy.h"

namespace dp
{
class MeleeStrategy : public DragonSlayingStrategy
{
public:
    ~MeleeStrategy() override = default;
    void execute() const override
    { 
        spdlog::info("With your Excalibur you sever the dragon's head!");
    }
};
} // namespace dp

#endif //MELEE_STRATEGY_H
