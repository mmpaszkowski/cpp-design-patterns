//
// Created by noname on 4/2/24.
//

#ifndef ELF_BEAST_H_
#define ELF_BEAST_H_

#include "Beast.h"

#include <utility>
#include <string>
#include <memory>

namespace dp
{
    class ElfBeast : public Beast
    {
    public:
        explicit constexpr ElfBeast(const std::string& weapon);
        explicit constexpr ElfBeast(std::string&& weapon) noexcept;
        constexpr ElfBeast(const ElfBeast& other);
        constexpr ElfBeast(ElfBeast&& other) noexcept;
        constexpr ElfBeast& operator=(const ElfBeast& other);
        constexpr ElfBeast& operator=(ElfBeast&& other) noexcept;
        constexpr ~ElfBeast() override;

        [[nodiscard]] constexpr std::string toString() const override ;
        [[nodiscard]] constexpr std::unique_ptr<Beast> clone() const override;

    private:
        std::string weapon_;
    };

    constexpr ElfBeast::ElfBeast(const std::string &weapon) : weapon_{weapon} { }
    constexpr ElfBeast::ElfBeast(std::string &&weapon) noexcept : Beast(), weapon_(std::move(weapon)) { }
    constexpr ElfBeast::ElfBeast(const ElfBeast& other) = default;
    constexpr ElfBeast::ElfBeast(ElfBeast&& other) noexcept = default;
    constexpr ElfBeast& ElfBeast::operator=(const ElfBeast& other) = default;
    constexpr ElfBeast& ElfBeast::operator=(ElfBeast&& other) noexcept = default;
    constexpr ElfBeast::~ElfBeast() = default;

    constexpr std::string ElfBeast::toString() const {
        return "Elven eagle helps in " + weapon_;
    }

    constexpr std::unique_ptr<Beast> ElfBeast::clone() const {
        return std::make_unique<ElfBeast>(*this);
    }
}

#endif //ELF_BEAST_H_
