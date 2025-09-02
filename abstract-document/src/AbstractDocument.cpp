//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include "AbstractDocument.h"

namespace dp
{
AbstractDocument::AbstractDocument(const std::map<std::string, std::any>& properties) : properties_(properties) {}

void AbstractDocument::put(const std::string& key, const std::any& value)
{
    properties_.insert_or_assign(key, value);
}

std::any AbstractDocument::get(const std::string& key) const noexcept
{
    if (auto it = properties_.find(key); it != properties_.end())
    {
        return it->second;
    }
    return std::any{};
}

std::vector<std::map<std::string, std::any>> AbstractDocument::children(const std::string& key) const noexcept
{
    auto value = get(key);
    if (const auto child =
            std::any_cast<std::vector<std::map<std::string, std::any>>>(&value))
    {
        return *child;
    }
    return {};
}
} // namespace dp
