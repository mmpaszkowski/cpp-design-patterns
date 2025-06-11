//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_KING_H
#define CPP_DESIGN_PATTERNS_ELF_KING_H

#include "King.h"

class ElfKing : public King
{
public:
    static constexpr std::string_view DESCRIPTION = "This is the elven king!";

    [[nodiscard]] std::string_view    getDescription() const noexcept override;
};

#endif //CPP_DESIGN_PATTERNS_ELF_KING_H
