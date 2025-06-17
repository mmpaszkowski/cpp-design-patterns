//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ARMY_H
#define CPP_DESIGN_PATTERNS_ARMY_H

#include <string>

namespace dp
{

/**
 * @class Army
 * @brief Abstract interface representing an army.
 *
 * This class defines the interface for different army types.
 * Concrete implementations must provide a description of the army.
 *
 * Example usage:
 * @code
 * class OrcArmy : public dp::Army {
 * public:
 *     std::string getDescription() const override {
 *         return "Orc Army";
 *     }
 * };
 * @endcode
 */
class Army
{
public:
    /**
     * @brief Virtual destructor for safe polymorphic destruction.
     */
    virtual ~Army() = default;

    /**
     * @brief Returns a description of the army.
     *
     * @return A string containing the description of the army.
     */
    [[nodiscard]] virtual std::string getDescription() const = 0;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_ARMY_H