//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_ARMY_H
#define CPP_DESIGN_PATTERNS_ELF_ARMY_H

#include "Army.h"

class ElfArmy : public Army
{
public:
    static constexpr std::string_view DESCRIPTION = "This is the elven army!";

    [[nodiscard]] std::string_view    getDescription() const noexcept override;
};

#endif //CPP_DESIGN_PATTERNS_ELF_ARMY_H
