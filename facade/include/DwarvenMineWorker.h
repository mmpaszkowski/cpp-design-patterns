//
// Created by noname on 4/16/24.
//

#ifndef DWARVEN_MINE_WORKER_H
#define DWARVEN_MINE_WORKER_H

#include <algorithm>
#include <spdlog/spdlog.h>
namespace dp
{
class DwarvenMineWorker
{
public:
    enum class Action
    {
        GoToSleep,
        WakeUp,
        GoHome,
        GoToMine,
        Work
    };

public:
    virtual constexpr ~DwarvenMineWorker() = default;

    virtual constexpr void goToSleep() const { spdlog::info(name() + " goes to sleep."); }

    virtual constexpr void wakeUp() const { spdlog::info(name() + " wakes up."); }

    virtual constexpr void goHome() const { spdlog::info(name() + " goes home."); }

    virtual constexpr void goToMine() const { spdlog::info(name() + " goes to the mine."); }

private:
    constexpr void action(Action action) const noexcept
    {
        switch (action)
        {
            case Action::GoToSleep: goToSleep(); break;
            case Action::WakeUp: wakeUp(); break;
            case Action::GoHome: goHome(); break;
            case Action::GoToMine: goToMine(); break;
            case Action::Work: work(); break;
            default: spdlog::error("Undefined action");
        }
    }

public:
    constexpr void action(std::initializer_list<Action> actions) const
    {
        std::ranges::for_each(actions, [this](auto&& action) -> void { this->action(action); });
    }
    virtual void                                work() const = 0;
    [[nodiscard]] virtual constexpr std::string name() const = 0;
};
} // namespace dp

#endif //DWARVEN_MINE_WORKER_H
