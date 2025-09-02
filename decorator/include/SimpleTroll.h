//
// Created by Mateusz Paszkowski on 13.04.2024.
//

#ifndef SIMPLE_TROLL_H
#define SIMPLE_TROLL_H

#include "Troll.h"
#include <memory>
#include <spdlog/spdlog.h>

namespace dp
{
class SimpleTroll : public Troll
{
public:
    constexpr ~SimpleTroll() override = default;
    void attack() override;
    int  getAttackPower() noexcept override;
    void fleeBattle() override;
};
} // namespace dp

#endif //SIMPLE_TROLL_H
