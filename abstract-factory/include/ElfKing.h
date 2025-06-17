//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_KING_H
#define CPP_DESIGN_PATTERNS_ELF_KING_H

#include "King.h"
#include <string>
#include <string_view>

namespace dp
{

/**
 * @class ElfKing
 * @brief Concrete implementation of the King interface representing an elven king.
 *
 * This class provides the description for the elven king.
 */
class ElfKing : public King
{
public:
    /**
     * @brief Description constant for the elven king.
     *
     * Stored as string_view, referring to a string literal (safe lifetime).
     */
    static constexpr std::string_view DESCRIPTION = "This is the elven king!";

    /**
     * @brief Returns the description of the elven king.
     *
     * @return A string containing the description of the elven king.
     */
    [[nodiscard]] std::string getDescription() const override;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_ELF_KING_H