//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_CASTLE_H
#define CPP_DESIGN_PATTERNS_CASTLE_H

#include <string>

class Castle {
public:
    [[nodiscard]] virtual const std::string& getDescription() const = 0;
    virtual ~Castle() = default;
};

#endif //CPP_DESIGN_PATTERNS_CASTLE_H
