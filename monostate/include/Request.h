//
// Created by noname on 4/5/24.
//

#ifndef REQUEST_H
#define REQUEST_H

#include <string>

namespace dp
{
class Request
{
public:
    constexpr explicit Request(const std::string& value);
    constexpr explicit Request(std::string&& value) noexcept;
    [[nodiscard]] constexpr const std::string& getValue() const noexcept;

private:
    const std::string value_;
};

constexpr Request::Request(const std::string& value) : value_(value) {}
constexpr Request::Request(std::string&& value) noexcept : value_(std::move(value)) {}
constexpr const std::string& Request::getValue() const noexcept { return value_; }

} // namespace dp

#endif //REQUEST_H
