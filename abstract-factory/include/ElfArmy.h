//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_ARMY_H
#define CPP_DESIGN_PATTERNS_ELF_ARMY_H

#include "Army.h"

class ElfArmy : public Army
{
public:
    const static std::string DESCRIPTION;

public:
    [[nodiscard]] const std::string& getDescription() const noexcept override;
};

#endif //CPP_DESIGN_PATTERNS_ELF_ARMY_H
