//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_ARMY_H
#define CPP_DESIGN_PATTERNS_ELF_ARMY_H

#include "Army.h"

namespace dp
{

/**
 * @class ElfArmy
 * @brief Concrete implementation of the Army interface representing an elven army.
 *
 * This class provides the description for the elven army.
 */
class ElfArmy : public Army
{
public:
    /**
     * @brief Description constant for the elven army.
     */
    static constexpr std::string_view DESCRIPTION = "This is the elven army!";

    /**
     * @brief Returns the description of the elven army.
     *
     * @return A string containing the description of the elven army.
     */
    [[nodiscard]] std::string getDescription() const override;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_ELF_ARMY_H
