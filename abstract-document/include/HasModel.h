//
// Created by noname on 01.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_HAS_MODEL_H
#define CPP_DESIGN_PATTERNS_HAS_MODEL_H

#include <optional>
#include "Document.h"
#include "enum/Property.h"

class HasModel : public virtual Document {
public:
    std::optional<std::string> getModel() {
        return std::any_cast<std::string>(this->get(to_string(Property::MODEL)));
    }
};

#endif //CPP_DESIGN_PATTERNS_HAS_MODEL_H
