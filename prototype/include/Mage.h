//
// Created by Mateusz Paszkowski on 30.03.2024.
//

#ifndef MAGE_H
#define MAGE_H

#include <memory>
#include <string>

namespace dp
{
class Mage
{
public:
    constexpr virtual ~Mage()                                                                 = default;
    [[nodiscard]] constexpr virtual bool                  operator==(const Mage& other) const = 0;
    [[nodiscard]] constexpr virtual bool                  operator!=(const Mage& other) const = 0;
    [[nodiscard]] virtual constexpr std::string           toString() const                    = 0;
    [[nodiscard]] virtual constexpr std::unique_ptr<Mage> clone() const                       = 0;
};
} // namespace dp

#endif //MAGE_H
