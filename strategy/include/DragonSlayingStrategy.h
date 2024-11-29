//
// Created by Mateusz Paszkowski on 28.11.2024.
//

#ifndef DRAGON_SLAYING_STRATEGY_H
#define DRAGON_SLAYING_STRATEGY_H

namespace dp
{
class DragonSlayingStrategy
{
public:
    virtual ~DragonSlayingStrategy() noexcept = default;
    virtual void execute() const = 0;
};
} // namespace dp
#endif //DRAGON_SLAYING_STRATEGY_H
