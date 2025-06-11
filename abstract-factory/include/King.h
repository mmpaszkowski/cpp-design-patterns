//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_KING_H
#define CPP_DESIGN_PATTERNS_KING_H

#include <string_view>

namespace dp
{
class King
{
public:
    virtual ~King()                                               = default;
    [[nodiscard]] virtual std::string_view getDescription() const = 0;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_KING_H
