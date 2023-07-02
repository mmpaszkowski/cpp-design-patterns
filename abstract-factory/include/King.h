//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_KING_H
#define CPP_DESIGN_PATTERNS_KING_H

#include <string>

class King
{
public:
    [[nodiscard]] virtual const std::string& getDescription() const = 0;
    virtual ~King() = default;
};

#endif //CPP_DESIGN_PATTERNS_KING_H
