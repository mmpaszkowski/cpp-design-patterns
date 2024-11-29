//
// Created by Mateusz Paszkowski on 28.11.2024.
//

#ifndef DRAGON_SLAYER_H
#define DRAGON_SLAYER_H

#include "DragonSlayingStrategy.h"
#include <memory>

namespace dp
{
class DragonSlayer
{
public:
    DragonSlayer(std::shared_ptr<DragonSlayingStrategy> strategy) : strategy(strategy) {}
    void changeStrategy(std::shared_ptr<DragonSlayingStrategy> strategy) { this->strategy = strategy; }
    void goToBattle() { strategy->execute(); }

private:
    std::shared_ptr<DragonSlayingStrategy> strategy;
};
} // namespace dp
#endif //DRAGON_SLAYER_H
