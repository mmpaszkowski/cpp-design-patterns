//
// Created by noname on 4/8/24.
//

#ifndef GOBLIN_H
#define GOBLIN_H
#include "Target.h"

namespace dp
{
class Goblin : public Target
{
public:
    constexpr Goblin() noexcept;
    [[nodiscard]] constexpr std::string toString() const override;
};

constexpr Goblin::Goblin() noexcept : Target(Size::Normal, Visibility::Visible) {}

constexpr std::string Goblin::toString() const { return "Goblin"; }
} // namespace dp


#endif //GOBLIN_H
