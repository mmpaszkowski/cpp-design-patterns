//
// Created by Mateusz Paszkowski on 23.04.2024.
//

#ifndef ORC_COMMANDER_H
#define ORC_COMMANDER_H

#include "RequestHandler.h"
#include <spdlog/spdlog.h>

namespace dp
{
class OrcCommander : public RequestHandler
{
public:
    constexpr ~OrcCommander() noexcept override = default;
    [[nodiscard]] constexpr bool canHandleRequest(const Request& req) const noexcept override
    {
        return req.getRequestType() == RequestType::DefendCastle;
    }
    [[nodiscard]] constexpr int         getPriority() const noexcept override { return 2; }
    [[nodiscard]] constexpr std::string name() const noexcept override { return "Orc commander"; }

    void                                handle(Request& req) const noexcept override;
};
} // namespace dp

#endif //ORC_COMMANDER_H
