//
// Created by noname on 4/23/24.
//

#ifndef ORC_KING_H
#define ORC_KING_H

#include "OrcCommander.h"
#include "OrcOfficer.h"
#include "OrcSoldier.h"
#include "RequestHandler.h"
#include <memory>
#include <ranges>
#include <set>
#include <spdlog/spdlog.h>

namespace dp
{
template <typename T> concept is_request = std::is_base_of_v<Request, std::remove_cvref_t<Request&>>;

class OrcKing
{
private:
    using comparator =
        std::function<bool(const std::unique_ptr<RequestHandler>&, const std::unique_ptr<RequestHandler>&)>;



public:
    OrcKing();

    void makeRequest(is_request auto&& req)
    {
        for (const std::unique_ptr<RequestHandler>& handler : handlers |
                 std::views::filter([&req](auto&& handler) noexcept -> bool { return handler->canHandleRequest(req); }))
        {
            handler->handle(req);
            break;
        }
    }

private:
    std::set<std::unique_ptr<RequestHandler>, comparator> handlers;
};
} // namespace dp

#endif //ORC_KING_H
