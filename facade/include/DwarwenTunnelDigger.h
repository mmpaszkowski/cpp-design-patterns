//
// Created by Mateusz Paszkowski on 16.04.2024.
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
    void        work() const override { spdlog::info(name() + " creates another promising tunnel."); }
    [[nodiscard]] constexpr std::string name() const override { return "Dwarven tunnel digger"; }
};

} // namespace dp

#endif //DWARWEN_TUNNEL_DIGGER_H
