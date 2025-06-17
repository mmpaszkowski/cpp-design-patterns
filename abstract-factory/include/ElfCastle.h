//
// Created by Mateusz Paszkowski on 29.06.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ELF_CASTLE_H
#define CPP_DESIGN_PATTERNS_ELF_CASTLE_H

#include "Castle.h"
#include <string>
#include <string_view>

namespace dp
{

/**
 * @class ElfCastle
 * @brief Concrete implementation of the Castle interface representing an elven castle.
 *
 * This class provides the description for the elven castle.
 */
class ElfCastle : public Castle
{
public:
    /**
     * @brief Description constant for the elven castle.
     */
    static constexpr std::string_view DESCRIPTION = "This is the elven castle!";

    /**
     * @brief Returns the description of the elven castle.
     *
     * @return A string containing the description of the elven castle.
     */
    [[nodiscard]] std::string getDescription() const override;
};

} // namespace dp

#endif // CPP_DESIGN_PATTERNS_ELF_CASTLE_H