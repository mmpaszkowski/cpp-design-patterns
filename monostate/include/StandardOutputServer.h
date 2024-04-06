//
// Created by noname on 4/5/24.
//

#ifndef STANDARD_OUTPUT_SERVER_H
#define STANDARD_OUTPUT_SERVER_H

#include "Request.h"
#include "Server.h"
#include <iostream>
#include <string>

namespace dp
{
class StandardOutputServer : public Server
{
public:
    constexpr StandardOutputServer(const std::string& host, int port, int id);
    constexpr StandardOutputServer(std::string&& host, int port, int id) noexcept;
    constexpr StandardOutputServer(const StandardOutputServer& other);
    constexpr StandardOutputServer(StandardOutputServer&& other) noexcept;

    [[nodiscard]] constexpr const std::string& getHost() const noexcept override;
    [[nodiscard]] constexpr int                getPort() const noexcept override;
    [[nodiscard]] constexpr size_t             getId() const noexcept override;
    void                                       serve(const Request& request) const noexcept override;

private:
    const std::string host_;
    const int         port_;
    const int         id_;
};
constexpr StandardOutputServer::StandardOutputServer(const std::string& host, int port, int id)
    : host_(host), port_(port), id_(id)
{
}
constexpr StandardOutputServer::StandardOutputServer(std::string&& host, int port, int id) noexcept
    : host_(std::move(host)), port_(port), id_(id)
{
}
constexpr StandardOutputServer::StandardOutputServer(const StandardOutputServer& other)     = default;
constexpr StandardOutputServer::StandardOutputServer(StandardOutputServer&& other) noexcept = default;

constexpr const std::string& StandardOutputServer::getHost() const noexcept { return host_; }
constexpr int                StandardOutputServer::getPort() const noexcept { return port_; }
constexpr size_t             StandardOutputServer::getId() const noexcept { return id_; }
} // namespace dp

#endif //STANDARD_OUTPUT_SERVER_H
