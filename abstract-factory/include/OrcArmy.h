//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ORC_ARMY_H
#define CPP_DESIGN_PATTERNS_ORC_ARMY_H

#include "Army.h"

namespace dp
{

/**
 * @class OrcArmy
 * @brief Concrete implementation of the Army interface representing an orc army.
 *
 * Provides a description of the orc army.
 */
class OrcArmy : public Army
{
public:
    /// Description constant for the orc army.
    static constexpr std::string_view DESCRIPTION = "This is the orc army!";

    /**
     * @brief Returns the description of the orc army.
     * @return A string with the orc army description.
     */
    [[nodiscard]] std::string getDescription() const override;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_ORC_ARMY_H