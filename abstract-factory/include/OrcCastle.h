//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_CASTLE_H
#define CPP_DESIGN_PATTERNS_ORC_CASTLE_H

#include "Castle.h"

namespace dp
{

/**
 * @class OrcCastle
 * @brief Concrete implementation of the Castle interface representing an orc castle.
 *
 * Provides a description of the orc castle.
 */
class OrcCastle : public Castle
{
public:
    /// Description constant for the orc castle.
    static constexpr std::string_view DESCRIPTION = "This is the orc castle!";

    /**
     * @brief Returns the description of the orc castle.
     * @return A string with the orc castle description.
     */
    [[nodiscard]] std::string getDescription() const override;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_ORC_CASTLE_H