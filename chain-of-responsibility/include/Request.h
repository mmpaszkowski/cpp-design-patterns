//
// Created by Mateusz Paszkowski on 23.04.2024.
//

#ifndef REQUEST_H
#define REQUEST_H

#include "RequestType.h"

namespace dp
{
class Request
{
private:
    RequestType request_type;
    std::string request_description;
    bool        handled;

public:
    constexpr Request(const RequestType requestType, std::string&& requestDescription) noexcept
        : request_type(requestType), request_description(std::move(requestDescription)), handled(false)
    {
    }

    virtual constexpr ~Request() noexcept = default;

    [[nodiscard]] constexpr const std::string& getRequestDescription() const noexcept { return request_description; }
    [[nodiscard]] constexpr RequestType        getRequestType() const noexcept { return request_type; }
    [[nodiscard]] constexpr bool               isHandled() const noexcept { return handled; }

    constexpr void                             markHandled() noexcept { handled = true; }
    [[nodiscard]] constexpr const std::string& toString() const noexcept { return getRequestDescription(); }
};

} // namespace dp

#endif //REQUEST_H
