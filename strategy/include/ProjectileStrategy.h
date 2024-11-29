//
// Created by Mateusz Paszkowski on 28.11.2024.
//

#ifndef PROJECTILE_STRATEGY_H
#define PROJECTILE_STRATEGY_H

#include "DragonSlayingStrategy.h"
#include <spdlog/spdlog.h>

namespace dp
{
class ProjectileStrategy : public DragonSlayingStrategy
{
public:
    ~ProjectileStrategy() override = default;
    void execute() const override
    {
        spdlog::info("You shoot the dragon with the magical crossbow and it falls dead on the ground!");
    }
};
} // namespace dp

#endif //PROJECTILE_STRATEGY_H
