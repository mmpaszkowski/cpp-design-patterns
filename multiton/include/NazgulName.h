//
// Created by noname on 4/6/24.
//

#ifndef NAZGUL_NAME_H
#define NAZGUL_NAME_H

#include <iostream>

namespace dp
{
using std::literals::string_literals::operator""s;

enum class NazgulName
{
    Khamul,
    Murazor,
    Dwar,
    JiIndur,
    Akhorahil,
    Hoarmurath,
    Adunaphel,
    Ren,
    Uvatha
};

constexpr std::ostream& operator<<(std::ostream& os, const NazgulName nazgul_name)
{
    switch (nazgul_name)
    {
        case NazgulName::Khamul: os << "Khamul"; break;
        case NazgulName::Murazor: os << "Murazor"; break;
        case NazgulName::Dwar: os << "Dwar"; break;
        case NazgulName::JiIndur: os << "JiIndur"; break;
        case NazgulName::Akhorahil: os << "Akhorahil"; break;
        case NazgulName::Hoarmurath: os << "Hoarmurath"; break;
        case NazgulName::Adunaphel: os << "Adunaphel"; break;
        case NazgulName::Ren: os << "Ren"; break;
        case NazgulName::Uvatha: os << "Uvatha"; break;
        default: throw std::runtime_error("Unexpected NazgulName enum value");
    }
    return os;
}

[[nodiscard]] constexpr std::string toString(const NazgulName nazgul_name)
{
    switch (nazgul_name)
    {
        case NazgulName::Khamul: return "Khamul"s;
        case NazgulName::Murazor: return "Murazor"s;
        case NazgulName::Dwar: return "Dwar"s;
        case NazgulName::JiIndur: return "JiIndur"s;
        case NazgulName::Akhorahil: return "Akhorahil"s;
        case NazgulName::Hoarmurath: return "Hoarmurath"s;
        case NazgulName::Adunaphel: return "Adunaphel"s;
        case NazgulName::Ren: return "Ren"s;
        case NazgulName::Uvatha: return "Uvatha"s;
        default: throw std::runtime_error("Unexpected NazgulName enum value");
    }
}
} // namespace dp


#endif //NAZGUL_NAME_H
