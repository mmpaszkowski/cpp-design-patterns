//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_ARMY_H
#define CPP_DESIGN_PATTERNS_ARMY_H

#include <string>

class Army
{
public:
    [[nodiscard]] virtual const std::string& getDescription() const = 0;
    virtual ~Army() = default;
};

#endif //CPP_DESIGN_PATTERNS_ARMY_H
