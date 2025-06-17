//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_CASTLE_H
#define CPP_DESIGN_PATTERNS_CASTLE_H

#include <string>

namespace dp
{

/**
 * @class Castle
 * @brief Abstract interface representing a castle.
 *
 * This class defines the interface for different castle types.
 * Concrete implementations must provide a description of the castle.
 *
 * Example usage:
 * @code
 * class ElfCastle : public dp::Castle {
 * public:
 *     std::string getDescription() const override {
 *         return "Elven Castle";
 *     }
 * };
 * @endcode
 */
class Castle
{
public:
    /**
     * @brief Virtual destructor for safe polymorphic destruction.
     */
    virtual ~Castle() = default;

    /**
     * @brief Returns a description of the castle.
     *
     * @return A string containing the description of the castle.
     */
    [[nodiscard]] virtual std::string getDescription() const = 0;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_CASTLE_H