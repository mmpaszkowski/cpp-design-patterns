//
// Created by noname on 01.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_HAS_TYPE_H
#define CPP_DESIGN_PATTERNS_HAS_TYPE_H

#include <optional>
#include "Document.h"
#include "enum/Property.h"

class HasType : public virtual Document {
public:
    std::optional<std::string> getType() {
        return std::any_cast<std::string>(this->get(to_string(Property::TYPE)));
    }
};

#endif //CPP_DESIGN_PATTERNS_HAS_TYPE_H
