//
// Created by noname on 4/16/24.
//

#ifndef DWARVEN_GOLD_DIGGER_H
#define DWARVEN_GOLD_DIGGER_H

#include "DwarvenMineWorker.h"

namespace dp
{
class DwarvenGoldDigger : public DwarvenMineWorker
{
public:
    void work() const override { spdlog::info(name() + " digs for gold."); }
    [[nodiscard]] constexpr std::string name() const override { return "Dwarf gold digger"; }
};
} // namespace dp

#endif //DWARVEN_GOLD_DIGGER_H
