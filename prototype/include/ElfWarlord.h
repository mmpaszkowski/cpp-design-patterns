//
// Created by noname on 4/2/24.
//

#ifndef ELF_WARLORD_H_
#define ELF_WARLORD_H_

#include "Warlord.h"

#include <utility>
#include <string>
#include <memory>

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
        [[nodiscard]] constexpr std::string toString() const override ;
        [[nodiscard]] constexpr std::unique_ptr<Warlord> clone() const override;

    private:
        std::string weapon_;
    };

    constexpr ElfWarlord::ElfWarlord(const std::string &weapon) : weapon_{weapon} { }
    constexpr ElfWarlord::ElfWarlord(std::string &&weapon) noexcept : Warlord(), weapon_(std::move(weapon)) { }
    constexpr ElfWarlord::ElfWarlord(const ElfWarlord& other) = default;
    constexpr ElfWarlord::ElfWarlord(ElfWarlord&& other) noexcept = default;
    constexpr ElfWarlord& ElfWarlord::operator=(const ElfWarlord& other) = default;
    constexpr ElfWarlord& ElfWarlord::operator=(ElfWarlord&& other) noexcept = default;
    constexpr ElfWarlord::~ElfWarlord() = default;

    constexpr std::string ElfWarlord::toString() const {
        return "Elven warlord helps in " + weapon_;
    }

    constexpr std::unique_ptr<Warlord> ElfWarlord::clone() const {
        return std::make_unique<ElfWarlord>(*this);
    }
}

#endif //ELF_WARLORD_H_
