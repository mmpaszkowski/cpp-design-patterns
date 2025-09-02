//
// Created by Mateusz Paszkowski on 05.04.2024.
//

#ifndef SERVER_H
#define SERVER_H

#include "Request.h"
#include <iostream>
#include <string>

namespace dp
{
class Server
{
public:
    virtual ~Server()                                                                               = default;
    [[nodiscard]] virtual constexpr const std::string& getHost() const noexcept                     = 0;
    [[nodiscard]] virtual constexpr int                getPort() const noexcept                     = 0;
    [[nodiscard]] virtual constexpr size_t             getId() const noexcept                       = 0;
    virtual void                                       serve(const Request& request) const noexcept = 0;
};

} // namespace dp

#endif //SERVER_H
