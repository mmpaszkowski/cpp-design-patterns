//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_HAS_MODEL_H
#define CPP_DESIGN_PATTERNS_HAS_MODEL_H

#include "Document.h"
#include "enum/Property.h"
#include <optional>

namespace dp
{
class HasModel : public virtual Document
{
public:
    [[nodiscard]] std::optional<std::string> getModel() const
    {
        auto value = get(to_string(Property::MODEL));
        if (const auto model = std::any_cast<std::string>(&value))
        {
            return *model;
        }
        return std::nullopt;
    }
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_HAS_MODEL_H
