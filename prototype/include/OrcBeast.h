//
// Created by noname on 4/2/24.
//

#ifndef ORC_BEAST_H_
#define ORC_BEAST_H_

#include "Beast.h"

#include <memory>
#include <string>
#include <utility>

namespace dp
{
class OrcBeast : public Beast
{
public:
    explicit constexpr OrcBeast(const std::string& weapon);
    explicit constexpr OrcBeast(std::string&& weapon) noexcept;
    constexpr OrcBeast(const OrcBeast& other);
    constexpr OrcBeast(OrcBeast&& other) noexcept;
    constexpr OrcBeast& operator=(const OrcBeast& other);
    constexpr OrcBeast& operator=(OrcBeast&& other) noexcept;
    constexpr ~OrcBeast() override;

    constexpr bool                                 operator==(const Beast& other) const override;
    [[nodiscard]] constexpr std::string            toString() const override;
    [[nodiscard]] constexpr std::unique_ptr<Beast> clone() const override;

private:
    std::string weapon_;
};

constexpr OrcBeast::OrcBeast(const std::string& weapon) : weapon_{weapon}
{
}
constexpr OrcBeast::OrcBeast(std::string&& weapon) noexcept : Beast(), weapon_(std::move(weapon))
{
}
constexpr OrcBeast::OrcBeast(const OrcBeast& other)                = default;
constexpr OrcBeast::OrcBeast(OrcBeast&& other) noexcept            = default;
constexpr OrcBeast& OrcBeast::operator=(const OrcBeast& other)     = default;
constexpr OrcBeast& OrcBeast::operator=(OrcBeast&& other) noexcept = default;
constexpr OrcBeast::~OrcBeast()                                    = default;

constexpr bool OrcBeast::operator==(const Beast& other) const
{
    try
    {
        auto otherElfBeast = dynamic_cast<const OrcBeast&>(other);
        return weapon_ == otherElfBeast.weapon_;
    }
    catch (const std::bad_cast&)
    {
        return false;
    }
}

constexpr std::string OrcBeast::toString() const
{
    return "Orcish wolf attacks with " + weapon_;
}

constexpr std::unique_ptr<Beast> OrcBeast::clone() const
{
    return std::make_unique<OrcBeast>(*this);
}
} // namespace dp

#endif //ORC_BEAST_H_
