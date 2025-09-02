//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include "AbstractDocument.h"

namespace dp
{
AbstractDocument::AbstractDocument() noexcept = default;

AbstractDocument::AbstractDocument(const std::map<std::string, std::any>& properties) : properties_(properties) {}

AbstractDocument::AbstractDocument(const AbstractDocument& other)                           = default;

AbstractDocument::AbstractDocument(AbstractDocument&& other) noexcept                       = default;

AbstractDocument& AbstractDocument::operator=(const AbstractDocument& abstractDocument)     = default;

AbstractDocument& AbstractDocument::operator=(AbstractDocument&& abstractDocument) noexcept = default;

void     AbstractDocument::put(const std::string& key, const std::any& value) { properties_.emplace(key, value); }

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
    if (auto value = get(key); value.has_value())
    {
        try
        {
            return std::any_cast<std::vector<std::map<std::string, std::any>>>(value);
        }
        catch (const std::bad_any_cast&)
        {
            return {};
        }
    }
    return {};
}
} // namespace dp
