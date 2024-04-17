//
// Created by noname on 4/16/24.
//

#ifndef DWARVEN_GOLDMINE_FACADE_H
#define DWARVEN_GOLDMINE_FACADE_H

#include <memory>
#include <vector>

#include "DwarvenCartOperator.h"
#include "DwarvenGoldDigger.h"
#include "DwarwenTunnelDigger.h"

namespace dp
{
class DwarvenGoldmineFacade
{
public:
    constexpr DwarvenGoldmineFacade() : workers{}
    {
        workers.push_back(std::make_unique<DwarvenGoldDigger>());
        workers.push_back(std::make_unique<DwarvenCartOperator>());
        workers.push_back(std::make_unique<DwarvenTunnelDigger>());
    }

    constexpr void startNewDay() const
    {
        makeActions(workers, {DwarvenMineWorker::Action::WakeUp, DwarvenMineWorker::Action::GoToMine});
    }
    constexpr void digOutGold() { makeActions(workers, {DwarvenMineWorker::Action::Work}); }
    constexpr void endDay()
    {
        makeActions(workers, {DwarvenMineWorker::Action::GoHome, DwarvenMineWorker::Action::GoToSleep});
    }

private:
    static void makeActions(const std::vector<std::unique_ptr<DwarvenMineWorker>>& workers,
                            const std::initializer_list<DwarvenMineWorker::Action> actions)
    {
        std::ranges::for_each(workers, [&actions](auto& worker) -> void { worker->action(actions); });
    }

private:
    std::vector<std::unique_ptr<DwarvenMineWorker>> workers;
};
} // namespace dp


#endif //DWARVEN_GOLDMINE_FACADE_H
