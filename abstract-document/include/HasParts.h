//
// Created by noname on 01.07.23.
//
//
#ifndef CPP_DESIGN_PATTERNS_HAS_PARTS_H
#define CPP_DESIGN_PATTERNS_HAS_PARTS_H

#include <optional>
#include <vector>
#include <ranges>
#include "Document.h"
#include "enum/Property.h"
#include "Part.h"

using std::ranges::views::transform;

class HasParts : public virtual Document {
public:
    std::vector<Part> getParts() {
        auto&& child = children(to_string(Property::PARTS));
        auto&& view = child | transform([](auto it) { return Part(it); });
        return {begin(view), end(view)};
    }
};

#endif //CPP_DESIGN_PATTERNS_HAS_PARTS_H
