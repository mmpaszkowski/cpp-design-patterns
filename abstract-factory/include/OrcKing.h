//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_KING_H
#define CPP_DESIGN_PATTERNS_ORC_KING_H

#include "King.h"

namespace dp
{

/**
 * @class OrcKing
 * @brief Concrete implementation of the King interface representing an orc king.
 *
 * Provides a description of the orc king.
 */
class OrcKing : public King
{
public:
    /// Description constant for the orc king.
    static constexpr std::string_view DESCRIPTION = "This is the orc king!";

    /**
     * @brief Returns the description of the orc king.
     * @return A string with the orc king description.
     */
    [[nodiscard]] std::string getDescription() const override;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_ORC_KING_H