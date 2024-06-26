//
// Created by noname on 4/5/24.
//

#include "StandardOutputServer.h"

namespace dp
{
void StandardOutputServer::serve(const Request& request) const noexcept
{
    std::cout << "Server ID " << id_ << " associated to host : " << host_ << " and port " << port_
              << ". Processed request with value " << request.getValue() << std::endl;
}
} // namespace dp
