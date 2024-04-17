//
// Created by noname on 4/13/24.
//

#ifndef CLUBBED_TROLL_H
#define CLUBBED_TROLL_H

#include "Troll.h"
#include <memory>
#include <spdlog/spdlog.h>

namespace dp
{
class ClubbedTroll : public Troll
{
public:
    explicit constexpr ClubbedTroll(std::unique_ptr<Troll>&& troll) noexcept : decorated{std::move(troll)} {}
    constexpr ~ClubbedTroll() noexcept override = default;

    void              attack() override;
    [[nodiscard]] constexpr int getAttackPower() override { return decorated->getAttackPower() + 10; }
    constexpr void              fleeBattle() override { decorated->fleeBattle(); }

private:
    std::unique_ptr<Troll> decorated;
};
} // namespace dp
#endif //CLUBBED_TROLL_H
