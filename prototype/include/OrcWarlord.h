//
// Created by noname on 4/2/24.
//

#ifndef ORC_WARLORD_H_
#define ORC_WARLORD_H_

#include "Warlord.h"

#include <utility>
#include <string>
#include <memory>

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
        [[nodiscard]] constexpr std::string toString() const override ;
        [[nodiscard]] constexpr std::unique_ptr<Warlord> clone() const override;

    private:
        std::string weapon_;
    };

    constexpr OrcWarlord::OrcWarlord(const std::string &weapon) : weapon_{weapon} { }
    constexpr OrcWarlord::OrcWarlord(std::string &&weapon) noexcept : Warlord(), weapon_(std::move(weapon)) { }
    constexpr OrcWarlord::OrcWarlord(const OrcWarlord& other) = default;
    constexpr OrcWarlord::OrcWarlord(OrcWarlord&& other) noexcept = default;
    constexpr OrcWarlord& OrcWarlord::operator=(const OrcWarlord& other) = default;
    constexpr OrcWarlord& OrcWarlord::operator=(OrcWarlord&& other) noexcept = default;
    constexpr OrcWarlord::~OrcWarlord() = default;

    constexpr std::string OrcWarlord::toString() const {
        return "Orcish warlord attacks with " + weapon_;
    }

    constexpr std::unique_ptr<Warlord> OrcWarlord::clone() const {
        return std::make_unique<OrcWarlord>(*this);
    }
}

#endif //ORC_WARLORD_H_
