//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_HAS_TYPE_H
#define CPP_DESIGN_PATTERNS_HAS_TYPE_H

#include "Document.h"
#include "enum/Property.h"
#include <optional>

namespace dp
{
class HasType : public virtual Document
{
public:
    [[nodiscard]] std::optional<std::string> getType() const
    {
        return std::any_cast<std::string>(get(to_string(Property::TYPE)));
    }
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_HAS_TYPE_H
