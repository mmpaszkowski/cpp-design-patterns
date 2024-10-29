//
// Created by noname on 4/2/24.
//

#ifndef ORC_MAGE_H_
#define ORC_MAGE_H_

#include "Mage.h"

#include <memory>
#include <string>
#include <utility>

namespace dp
{
class OrcMage : public Mage
{
public:
    explicit constexpr OrcMage(const std::string& weapon);
    explicit constexpr OrcMage(std::string&& weapon) noexcept;
    constexpr OrcMage(const OrcMage& other);
    constexpr OrcMage(OrcMage&& other) noexcept;
    constexpr OrcMage& operator=(const OrcMage& other);
    constexpr OrcMage& operator=(OrcMage&& other) noexcept;
    constexpr ~OrcMage() override;

    [[nodiscard]] constexpr bool                  operator==(const Mage& other) const override;
    [[nodiscard]] constexpr bool                  operator!=(const Mage& other) const override;
    [[nodiscard]] constexpr std::string           toString() const override;
    [[nodiscard]] std::unique_ptr<Mage>           clone() const override { return std::make_unique<OrcMage>(*this); }

private:
    std::string weapon_;
};

constexpr OrcMage::OrcMage(const std::string& weapon) : weapon_{weapon}
{
}
constexpr OrcMage::OrcMage(std::string&& weapon) noexcept : Mage(), weapon_(std::move(weapon))
{
}
constexpr OrcMage::OrcMage(const OrcMage& other)                = default;
constexpr OrcMage::OrcMage(OrcMage&& other) noexcept            = default;
constexpr OrcMage& OrcMage::operator=(const OrcMage& other)     = default;
constexpr OrcMage& OrcMage::operator=(OrcMage&& other) noexcept = default;
constexpr OrcMage::~OrcMage()                                   = default;

constexpr bool OrcMage::operator==(const Mage& other) const
{
    try
    {
        auto otherOrcMage = dynamic_cast<const OrcMage&>(other);
        return weapon_ == otherOrcMage.weapon_;
    }
    catch (const std::bad_cast&)
    {
        return false;
    }
}

constexpr bool OrcMage::operator!=(const Mage& other) const
{
    try
    {
        auto otherOrcMage = dynamic_cast<const OrcMage&>(other);
        return weapon_ != otherOrcMage.weapon_;
    }
    catch (const std::bad_cast&)
    {
        return true;
    }
}

constexpr std::string OrcMage::toString() const
{
    return "Orcish mage attacks with " + weapon_;
}

} // namespace dp

#endif //ORC_MAGE_H_
