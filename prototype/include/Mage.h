//
// Created by noname on 3/30/24.
//

#ifndef MAGE_H
#define MAGE_H

#include <string>
#include <memory>

namespace dp {
    class Mage
    {
    public:
        [[nodiscard]] virtual constexpr std::string toString() const = 0;
        [[nodiscard]] virtual constexpr std::unique_ptr<Mage> clone() const = 0;
        constexpr virtual ~Mage() = default;
    };
}

#endif //MAGE_H
