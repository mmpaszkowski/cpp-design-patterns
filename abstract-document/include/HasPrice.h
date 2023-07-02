//
// Created by noname on 01.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_HAS_PRICE_H
#define CPP_DESIGN_PATTERNS_HAS_PRICE_H

#include <optional>
#include "Document.h"
#include "enum/Property.h"

class HasPrice : public virtual Document {
public:
    std::optional<long> getPrice() {
        return std::any_cast<long>(this->get(to_string(Property::PRICE)));
    }
};

#endif //CPP_DESIGN_PATTERNS_HAS_PRICE_H
