//
// Created by Mateusz Paszkowski on 05.04.2024.
//

#include "LoadBalancer.h"

namespace dp
{
void   LoadBalancer::addServer(std::unique_ptr<Server>&& server) { servers.push_back(std::move(server)); }
void   LoadBalancer::removeServer() noexcept { servers.pop_back(); }
size_t LoadBalancer::getNoOfServers() const noexcept { return servers.size(); }
size_t LoadBalancer::getLastServedId() const noexcept { return lastServedId; }
void   LoadBalancer::serverRequest(const Request& request) const noexcept
{
    lastServedId %= servers.size();
    servers[lastServedId++]->serve(request);
}
std::vector<std::unique_ptr<Server>> LoadBalancer::servers;
size_t                               LoadBalancer::lastServedId;
LoadBalancer::Construct              LoadBalancer::construct;
LoadBalancer::Construct::Construct()
{
    int id = 0;
    for (auto port : {8080, 8081, 8082, 8083, 8084})
        LoadBalancer::servers.push_back(std::make_unique<StandardOutputServer>("localhost", port, id++));
    LoadBalancer::lastServedId = 0ull;
}
} // namespace dp
