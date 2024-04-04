//
// Created by noname on 3/30/24.
//

#ifndef BEAST_H
#define BEAST_H

#include <string>
#include <memory>

namespace dp {
    class Beast
    {
    public:
        [[nodiscard]] virtual constexpr std::string toString() const = 0;
        [[nodiscard]] virtual constexpr std::unique_ptr<Beast> clone() const = 0;
        constexpr virtual ~Beast() = default;
    };
}

#endif //BEAST_H
