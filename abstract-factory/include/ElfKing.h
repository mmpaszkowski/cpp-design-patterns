//
// Created by noname on 29.06.23.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_KING_H
#define CPP_DESIGN_PATTERNS_ELF_KING_H

#include "King.h"

class ElfKing : public King
{
public:
    const static std::string DESCRIPTION;

public:
    [[nodiscard]] const std::string &getDescription() const noexcept override;
};

#endif //CPP_DESIGN_PATTERNS_ELF_KING_H
