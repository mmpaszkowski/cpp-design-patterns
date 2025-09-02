//
// Created by Mateusz Paszkowski on 05.04.2024.
//

#ifndef LOAD_BALANCER_H
#define LOAD_BALANCER_H

#include "StandardOutputServer.h"
#include <memory>
#include <vector>

namespace dp
{
class LoadBalancer
{
public:
    void                 addServer(std::unique_ptr<Server>&& server);
    void                 removeServer() noexcept;
    [[nodiscard]] size_t getNoOfServers() const noexcept;
    [[nodiscard]] size_t getLastServedId() const noexcept;
    void                 serverRequest(const Request& request) const noexcept;

private:
    static std::vector<std::unique_ptr<Server>> servers;
    static size_t                               lastServedId;

    [[maybe_unused]] struct Construct
    {
        Construct();
    } static construct;
};
} // namespace dp
#endif //LOAD_BALANCER_H
