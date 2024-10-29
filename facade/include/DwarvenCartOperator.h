//
// Created by noname on 4/16/24.
//

#ifndef DWARVEN_CART_OPERATOR_H
#define DWARVEN_CART_OPERATOR_H

#include "DwarvenMineWorker.h"
#include <string>

namespace dp
{
class DwarvenCartOperator : public DwarvenMineWorker
{
public:
    void work() const override { spdlog::info(name() + " moves gold chunks out of the mine."); }
    [[nodiscard]] constexpr std::string name() const override { return "Dwarf cart operator"; }
};

} // namespace dp

#endif //DWARVEN_CART_OPERATOR_H
