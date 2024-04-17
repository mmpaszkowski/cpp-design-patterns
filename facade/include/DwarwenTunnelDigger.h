//
// Created by noname on 4/16/24.
//

#ifndef DWARWEN_TUNNEL_DIGGER_H
#define DWARWEN_TUNNEL_DIGGER_H

#include "DwarvenMineWorker.h"

namespace dp
{

class DwarvenTunnelDigger : public DwarvenMineWorker
{
public:
    ~DwarvenTunnelDigger() noexcept override = default;
    constexpr void        work() const override { spdlog::info(name() + " creates another promising tunnel."); }
    [[nodiscard]] constexpr std::string name() const override { return "Dwarven tunnel digger"; }
};

} // namespace dp

#endif //DWARWEN_TUNNEL_DIGGER_H
