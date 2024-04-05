//
// Created by noname on 4/2/24.
//

#ifndef ORC_WARLORD_H_
#define ORC_WARLORD_H_

#include "Warlord.h"

#include <memory>
#include <string>
#include <utility>

namespace dp
{
class OrcWarlord : public Warlord
{
public:
    explicit constexpr OrcWarlord(const std::string& weapon);
    explicit constexpr OrcWarlord(std::string&& weapon) noexcept;
    constexpr OrcWarlord(const OrcWarlord& other);
    constexpr OrcWarlord(OrcWarlord&& other) noexcept;
    constexpr OrcWarlord& operator=(const OrcWarlord& other);
    constexpr OrcWarlord& operator=(OrcWarlord&& other) noexcept;
    constexpr ~OrcWarlord() override;

    constexpr bool                                   operator==(const Warlord& other) const override;
    [[nodiscard]] constexpr std::string              toString() const override;
    [[nodiscard]] constexpr std::unique_ptr<Warlord> clone() const override;

private:
    std::string weapon_;
};

constexpr OrcWarlord::OrcWarlord(const std::string& weapon) : weapon_{weapon} { }

constexpr OrcWarlord::OrcWarlord(std::string&& weapon) noexcept : Warlord(), weapon_(std::move(weapon)) { }

constexpr OrcWarlord::OrcWarlord(const OrcWarlord& other)                = default;
constexpr OrcWarlord::OrcWarlord(OrcWarlord&& other) noexcept            = default;
constexpr OrcWarlord& OrcWarlord::operator=(const OrcWarlord& other)     = default;
constexpr OrcWarlord& OrcWarlord::operator=(OrcWarlord&& other) noexcept = default;
constexpr OrcWarlord::~OrcWarlord()                                      = default;

constexpr bool OrcWarlord::operator==(const Warlord& other) const
{
    try
    {
        auto otherOrcWarlord = dynamic_cast<const OrcWarlord&>(other);
        return weapon_ == otherOrcWarlord.weapon_;
    }
    catch (const std::bad_cast&)
    {
        return false;
    }
}

constexpr std::string OrcWarlord::toString() const
{
    return "Orcish warlord attacks with " + weapon_;
}

constexpr std::unique_ptr<Warlord> OrcWarlord::clone() const
{
    return std::make_unique<OrcWarlord>(*this);
}
} // namespace dp

#endif //ORC_WARLORD_H_
