//
// Created by noname on 4/23/24.
//

#ifndef REQUEST_HANDLER_H
#define REQUEST_HANDLER_H

#include "Request.h"

namespace dp
{
class RequestHandler
{
public:
    constexpr virtual ~RequestHandler() noexcept                                          = default;
    [[nodiscard]] virtual bool        canHandleRequest(const Request& req) const noexcept = 0;
    [[nodiscard]] virtual int         getPriority() const noexcept                        = 0;
    virtual void                      handle(Request& req) const noexcept                 = 0;
    [[nodiscard]] virtual std::string name() const noexcept                               = 0;
};
} // namespace dp

#endif //REQUEST_HANDLER_H
