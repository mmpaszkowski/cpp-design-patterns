//
// Created by noname on 3/30/24.
//

#ifndef WARLORD_H
#define WARLORD_H

#include <string>
#include <memory>

namespace dp {
    class Warlord
    {
    public:
        [[nodiscard]] virtual constexpr std::string toString() const = 0;
        [[nodiscard]] virtual constexpr std::unique_ptr<Warlord> clone() const = 0;
        constexpr virtual ~Warlord() = default;
    };
}

#endif //WARLORD_H
