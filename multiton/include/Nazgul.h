//
// Created by noname on 4/6/24.
//

#ifndef NAZGUL_H
#define NAZGUL_H

#include "NazgulName.h"
#include <map>
#include <memory>
#include <vector>

namespace dp
{
class Nazgul
{
public:
    [[nodiscard]] static const Nazgul& getInstance(NazgulName name);
    [[nodiscard]] NazgulName           getName() const noexcept;

private:
    constexpr explicit Nazgul(NazgulName name) noexcept;
    static void init();

private:
    NazgulName                                           name_;
    static std::map<NazgulName, std::unique_ptr<Nazgul>> nazguls_;
};

constexpr Nazgul::Nazgul(NazgulName name) noexcept : name_(name) {}

} // namespace dp

#endif //NAZGUL_H
