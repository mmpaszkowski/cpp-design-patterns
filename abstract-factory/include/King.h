//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_KING_H
#define CPP_DESIGN_PATTERNS_KING_H

#include <string>

namespace dp
{

/**
 * @class King
 * @brief Abstract interface representing a king.
 *
 * This class defines the interface for different king types.
 * Concrete implementations must provide a description of the king.
 *
 * Example usage:
 * @code
 * class ElfKing : public dp::King {
 * public:
 *     std::string getDescription() const override {
 *         return "Elven King";
 *     }
 * };
 * @endcode
 */
class King
{
public:
    /**
     * @brief Virtual destructor for safe polymorphic destruction.
     */
    virtual ~King() = default;

    /**
     * @brief Returns a description of the king.
     *
     * @return A string containing the description of the king.
     */
    [[nodiscard]] virtual std::string getDescription() const = 0;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_KING_H