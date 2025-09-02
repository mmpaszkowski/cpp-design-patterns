//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_HAS_PARTS_H
#define CPP_DESIGN_PATTERNS_HAS_PARTS_H

#include "Document.h"
#include "Part.h"
#include "enum/Property.h"
#include <optional>
#include <ranges>
#include <vector>

namespace dp
{
class HasParts : public virtual Document
{
public:
    [[nodiscard]] std::vector<Part> getParts() const
    {
        auto child = children(to_string(Property::PARTS));
        auto view  = child | std::views::transform([](const auto& it) { return Part(it); });
        return {begin(view), end(view)};
    }
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_HAS_PARTS_H
