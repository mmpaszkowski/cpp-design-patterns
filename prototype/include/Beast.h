//
// Created by noname on 3/30/24.
//

#ifndef BEAST_H
#define BEAST_H

#include <memory>
#include <string>

namespace dp
{
class Beast
{
public:
    constexpr virtual ~Beast()                                                                  = default;
    [[nodiscard]] constexpr virtual bool                   operator==(const Beast& other) const { return false; }
    [[nodiscard]] constexpr virtual bool                   operator!=(const Beast& other) const { return false; }
    [[nodiscard]] virtual constexpr std::string            toString() const                     = 0;
    [[nodiscard]] virtual constexpr std::unique_ptr<Beast> clone() const                        = 0;
};
} // namespace dp

#endif //BEAST_H
