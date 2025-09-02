//
// Created by Mateusz Paszkowski on 02.04.2024.
//

#ifndef ELF_MAGE_H_
#define ELF_MAGE_H_

#include "Mage.h"

#include <memory>
#include <string>
#include <utility>

namespace dp
{
class ElfMage : public Mage
{
public:
    explicit constexpr ElfMage(const std::string& weapon);
    explicit constexpr ElfMage(std::string&& weapon) noexcept;
    constexpr ElfMage(const ElfMage& other);
    constexpr ElfMage(ElfMage&& other) noexcept;
    constexpr ElfMage& operator=(const ElfMage& other);
    constexpr ElfMage& operator=(ElfMage&& other) noexcept;
    constexpr ~ElfMage() override;

    [[nodiscard]] constexpr bool        operator==(const Mage& other) const override;
    [[nodiscard]] constexpr bool        operator!=(const Mage& other) const override;
    [[nodiscard]] constexpr std::string toString() const override;
    [[nodiscard]] std::unique_ptr<Mage> clone() const override { return std::make_unique<ElfMage>(*this); }

private:
    std::string weapon_;
};

constexpr ElfMage::ElfMage(const std::string& weapon) : weapon_{weapon}
{
}
constexpr ElfMage::ElfMage(std::string&& weapon) noexcept : Mage(), weapon_(std::move(weapon))
{
}
constexpr ElfMage::ElfMage(const ElfMage& other)                = default;
constexpr ElfMage::ElfMage(ElfMage&& other) noexcept            = default;
constexpr ElfMage& ElfMage::operator=(const ElfMage& other)     = default;
constexpr ElfMage& ElfMage::operator=(ElfMage&& other) noexcept = default;
constexpr ElfMage::~ElfMage()                                   = default;

constexpr bool ElfMage::operator==(const Mage& other) const
{
    try
    {
        auto otherElfMage = dynamic_cast<const ElfMage&>(other);
        return weapon_ == otherElfMage.weapon_;
    }
    catch (const std::bad_cast&)
    {
        return false;
    }
}

constexpr bool ElfMage::operator!=(const Mage& other) const
{
    try
    {
        auto otherElfMage = dynamic_cast<const ElfMage&>(other);
        return weapon_ != otherElfMage.weapon_;
    }
    catch (const std::bad_cast&)
    {
        return true;
    }
}

constexpr std::string ElfMage::toString() const
{
    return "Elven mage helps in " + weapon_;
}

} // namespace dp

#endif //ELF_MAGE_H_
