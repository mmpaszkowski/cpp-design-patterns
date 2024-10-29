//
// Created by noname on 4/2/24.
//

#ifndef ELF_WARLORD_H_
#define ELF_WARLORD_H_

#include "Warlord.h"

#include <memory>
#include <string>
#include <utility>

namespace dp
{
class ElfWarlord : public Warlord
{
public:
    explicit constexpr ElfWarlord(const std::string& weapon);
    explicit constexpr ElfWarlord(std::string&& weapon) noexcept;
    constexpr ElfWarlord(const ElfWarlord& other);
    constexpr ElfWarlord(ElfWarlord&& other) noexcept;
    constexpr ElfWarlord& operator=(const ElfWarlord& other);
    constexpr ElfWarlord& operator=(ElfWarlord&& other) noexcept;
    constexpr ~ElfWarlord() override;

    [[nodiscard]] constexpr bool           operator==(const Warlord& other) const override;
    [[nodiscard]] constexpr bool           operator!=(const Warlord& other) const override;
    [[nodiscard]] constexpr std::string    toString() const override;
    [[nodiscard]] std::unique_ptr<Warlord> clone() const override { return std::make_unique<ElfWarlord>(*this); }

private:
    std::string weapon_;
};

constexpr ElfWarlord::ElfWarlord(const std::string& weapon) : weapon_{weapon}
{
}
constexpr ElfWarlord::ElfWarlord(std::string&& weapon) noexcept : Warlord(), weapon_(std::move(weapon))
{
}
constexpr ElfWarlord::ElfWarlord(const ElfWarlord& other)                = default;
constexpr ElfWarlord::ElfWarlord(ElfWarlord&& other) noexcept            = default;
constexpr ElfWarlord& ElfWarlord::operator=(const ElfWarlord& other)     = default;
constexpr ElfWarlord& ElfWarlord::operator=(ElfWarlord&& other) noexcept = default;
constexpr ElfWarlord::~ElfWarlord()                                      = default;

constexpr bool ElfWarlord::operator==(const Warlord& other) const
{
    try
    {
        auto otherElfWarlord = dynamic_cast<const ElfWarlord&>(other);
        return weapon_ == otherElfWarlord.weapon_;
    }
    catch (const std::bad_cast&)
    {
        return false;
    }
}

constexpr bool ElfWarlord::operator!=(const Warlord& other) const
{
    try
    {
        auto otherElfWarlord = dynamic_cast<const ElfWarlord&>(other);
        return weapon_ != otherElfWarlord.weapon_;
    }
    catch (const std::bad_cast&)
    {
        return true;
    }
}

constexpr std::string ElfWarlord::toString() const
{
    return "Elven warlord helps in " + weapon_;
}

} // namespace dp

#endif //ELF_WARLORD_H_
