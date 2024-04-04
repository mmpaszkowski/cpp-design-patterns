//
// Created by noname on 4/2/24.
//

#ifndef ELF_MAGE_H_
#define ELF_MAGE_H_

#include "Mage.h"

#include <utility>
#include <string>
#include <memory>

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

        [[nodiscard]] constexpr std::string toString() const override ;
        [[nodiscard]] constexpr std::unique_ptr<Mage> clone() const override;

    private:
        std::string weapon_;
    };

    constexpr ElfMage::ElfMage(const std::string &weapon) : weapon_{weapon} { }
    constexpr ElfMage::ElfMage(std::string &&weapon) noexcept : Mage(), weapon_(std::move(weapon)) { }
    constexpr ElfMage::ElfMage(const ElfMage& other) = default;
    constexpr ElfMage::ElfMage(ElfMage&& other) noexcept = default;
    constexpr ElfMage& ElfMage::operator=(const ElfMage& other) = default;
    constexpr ElfMage& ElfMage::operator=(ElfMage&& other) noexcept = default;
    constexpr ElfMage::~ElfMage() = default;

    constexpr std::string ElfMage::toString() const {
        return "Elven mage helps in " + weapon_;
    }

    constexpr std::unique_ptr<Mage> ElfMage::clone() const {
        return std::make_unique<ElfMage>(*this);
    }
}

#endif //ELF_MAGE_H_
