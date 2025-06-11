//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_KING_H
#define CPP_DESIGN_PATTERNS_ORC_KING_H

#include "King.h"

class OrcKing : public King
{
public:
    static constexpr std::string_view               DESCRIPTION = "This is the orc king!";

    [[nodiscard]] std::string_view getDescription() const noexcept override;
};

#endif //CPP_DESIGN_PATTERNS_ORC_KING_H
