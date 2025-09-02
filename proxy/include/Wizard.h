//
// Created by Mateusz Paszkowski on 21.04.2024.
//

#ifndef WIZARD_H
#define WIZARD_H

#include <string>

namespace dp
{
class Wizard
{
public:
    explicit constexpr Wizard(std::string&& name) noexcept : name(name) {}
    virtual constexpr ~Wizard() = default;
    [[nodiscard]] constexpr const std::string& getName() const noexcept { return name; }

private:
    std::string name;
};
} // namespace

#endif //WIZARD_H
