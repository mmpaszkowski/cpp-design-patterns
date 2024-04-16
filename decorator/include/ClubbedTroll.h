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
    virtual constexpr ~ClubbedTroll() = default;
    void attack() override;
    int constexpr getAttackPower() override { return decorated->getAttackPower() + 10; }
    void constexpr fleeBattle() override { decorated->fleeBattle(); }

private:
    std::unique_ptr<Troll> decorated;
};
} // namespace dp
#endif //CLUBBED_TROLL_H
