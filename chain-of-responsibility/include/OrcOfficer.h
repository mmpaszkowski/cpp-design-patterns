//
// Created by noname on 4/23/24.
//

#ifndef ORC_OFFICER_H
#define ORC_OFFICER_H

#include "RequestHandler.h"
#include <spdlog/spdlog.h>

namespace dp
{
class OrcOfficer : public RequestHandler
{
public:
    constexpr ~OrcOfficer() noexcept override = default;
    [[nodiscard]] constexpr bool canHandleRequest(const Request& req) const noexcept override
    {
        return req.getRequestType() == RequestType::TorturePrisoner;
    }
    [[nodiscard]] constexpr int         getPriority() const noexcept override { return 3; }
    [[nodiscard]] constexpr std::string name() const noexcept override { return "Orc officer"; }

    void                                handle(Request& req) const noexcept override;
};
} // namespace dp

#endif //ORC_OFFICER_H
