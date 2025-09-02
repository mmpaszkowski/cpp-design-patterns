//
// Created by Mateusz Paszkowski on 30.03.2024.
//

#ifndef WARLORD_H
#define WARLORD_H

#include <memory>
#include <string>

namespace dp
{
class Warlord
{
public:
    constexpr virtual ~Warlord()                                                                    = default;
    [[nodiscard]] constexpr virtual bool                     operator==(const Warlord& other) const = 0;
    [[nodiscard]] constexpr virtual bool                     operator!=(const Warlord& other) const = 0;
    [[nodiscard]] virtual constexpr std::string              toString() const                       = 0;
    [[nodiscard]] virtual constexpr std::unique_ptr<Warlord> clone() const                          = 0;
};
} // namespace dp

#endif //WARLORD_H
