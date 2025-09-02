//
// Created by Mateusz Paszkowski on 23.04.2024.
//

#ifndef ORC_SOLDIER_H
#define ORC_SOLDIER_H

#include "RequestHandler.h"
#include <spdlog/spdlog.h>

namespace dp
{
class OrcSoldier : public RequestHandler
{
public:
    constexpr ~OrcSoldier() noexcept override = default;
    [[nodiscard]] constexpr bool canHandleRequest(const Request& req) const noexcept override
    {
        return req.getRequestType() == RequestType::CollectTax;
    }
    [[nodiscard]] constexpr int         getPriority() const noexcept override { return 1; }
    [[nodiscard]] constexpr std::string name() const noexcept override { return "Orc soldier"; }

    void                                handle(Request& req) const noexcept override;
};
} // namespace dp

#endif //ORC_SOLDIER_H
