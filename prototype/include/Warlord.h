//
// Created by noname on 3/30/24.
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
    constexpr virtual bool                                   operator==(const Warlord& other) const = 0;
    [[nodiscard]] virtual constexpr std::string              toString() const                       = 0;
    [[nodiscard]] virtual constexpr std::unique_ptr<Warlord> clone() const                          = 0;
};
} // namespace dp

#endif //WARLORD_H
