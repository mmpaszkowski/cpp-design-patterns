//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_CASTLE_H
#define CPP_DESIGN_PATTERNS_CASTLE_H

#include <string_view>

namespace dp
{
class Castle
{
public:
    virtual ~Castle()                                             = default;
    [[nodiscard]] virtual std::string_view getDescription() const = 0;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_CASTLE_H
