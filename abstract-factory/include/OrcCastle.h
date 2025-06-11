//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_CASTLE_H
#define CPP_DESIGN_PATTERNS_ORC_CASTLE_H

#include "Castle.h"

class OrcCastle : public Castle
{
public:
    static constexpr std::string_view               DESCRIPTION = "This is the orc castle!";

    [[nodiscard]]std::string_view getDescription() const noexcept override;
};

#endif //CPP_DESIGN_PATTERNS_ORC_CASTLE_H
