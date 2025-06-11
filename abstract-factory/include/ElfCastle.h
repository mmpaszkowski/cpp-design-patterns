//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_CASTLE_H
#define CPP_DESIGN_PATTERNS_ELF_CASTLE_H

#include "Castle.h"

namespace dp
{
class ElfCastle : public Castle
{
public:
    static constexpr std::string_view DESCRIPTION = "This is the elven castle!";

    [[nodiscard]] std::string_view    getDescription() const noexcept override;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_ELF_CASTLE_H
