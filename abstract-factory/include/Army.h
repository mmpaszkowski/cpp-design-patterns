//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ARMY_H
#define CPP_DESIGN_PATTERNS_ARMY_H

#include <string_view>

namespace dp
{
class Army
{
public:
    virtual ~Army()                                               = default;
    [[nodiscard]] virtual std::string_view getDescription() const = 0;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_ARMY_H
