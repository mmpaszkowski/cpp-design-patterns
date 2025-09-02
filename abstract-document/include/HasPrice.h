//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_HAS_PRICE_H
#define CPP_DESIGN_PATTERNS_HAS_PRICE_H

#include "Document.h"
#include "enum/Property.h"
#include <optional>

namespace dp
{
class HasPrice : public virtual Document
{
public:
    [[nodiscard]] std::optional<long> getPrice() const
    {
        auto value = get(to_string(Property::PRICE));
        if (const auto price = std::any_cast<long>(&value))
        {
            return *price;
        }
        return std::nullopt;
    }
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_HAS_PRICE_H
