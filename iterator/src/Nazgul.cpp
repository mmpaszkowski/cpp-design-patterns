//
// Created by Mateusz Paszkowski on 06.04.2024.
//

#include "Nazgul.h"
#include <memory>

namespace dp {
    std::map<NazgulName, std::unique_ptr<Nazgul>> Nazgul::nazguls_;

    const Nazgul &Nazgul::getInstance(NazgulName name) {
        if (nazguls_.empty())
            init();
        return *nazguls_[name];
    }

    NazgulName Nazgul::getName() const noexcept { return name_; }

    void Nazgul::init() {
        struct TemporaryPublicConstructor : public Nazgul {
            explicit TemporaryPublicConstructor(NazgulName name) noexcept: Nazgul(name) {}
        };

        nazguls_.emplace(NazgulName::Khamul, std::make_unique<TemporaryPublicConstructor>(NazgulName::Khamul));
        nazguls_.emplace(NazgulName::Murazor, std::make_unique<TemporaryPublicConstructor>(NazgulName::Murazor));
        nazguls_.emplace(NazgulName::Dwar, std::make_unique<TemporaryPublicConstructor>(NazgulName::Dwar));
        nazguls_.emplace(NazgulName::JiIndur, std::make_unique<TemporaryPublicConstructor>(NazgulName::JiIndur));
        nazguls_.emplace(NazgulName::Akhorahil, std::make_unique<TemporaryPublicConstructor>(NazgulName::Akhorahil));
        nazguls_.emplace(NazgulName::Hoarmurath, std::make_unique<TemporaryPublicConstructor>(NazgulName::Hoarmurath));
        nazguls_.emplace(NazgulName::Adunaphel, std::make_unique<TemporaryPublicConstructor>(NazgulName::Adunaphel));
        nazguls_.emplace(NazgulName::Ren, std::make_unique<TemporaryPublicConstructor>(NazgulName::Ren));
        nazguls_.emplace(NazgulName::Uvatha, std::make_unique<TemporaryPublicConstructor>(NazgulName::Uvatha));
    }


    constexpr Nazgul::Nazgul(NazgulName name) noexcept: name_(name) {}

    Nazgul::Iterator Nazgul::begin() {
        if (nazguls_.empty())
            init();
        return Iterator(nazguls_.begin());
    }

    Nazgul::Iterator Nazgul::end() {
        if (nazguls_.empty())
            init();
        return Iterator(nazguls_.end());
    }

    std::pair<const NazgulName &, Nazgul &> &Nazgul::Iterator::operator*() noexcept {
        return *current_node;
    }

    std::pair<const NazgulName &, Nazgul &> *Nazgul::Iterator::operator->() noexcept {
        return current_node.get();
    }

    Nazgul::Iterator::self &Nazgul::Iterator::operator++() noexcept {
        nazgul_node++;
        current_node = std::make_shared<std::pair<const NazgulName &, Nazgul &>>(nazgul_node->first,
                                                                                 *nazgul_node->second);
        return *this;
    }

    Nazgul::Iterator::self Nazgul::Iterator::operator++(int) noexcept {
        self tmp = *this;
        nazgul_node++;
        current_node = std::make_shared<std::pair<const NazgulName &, Nazgul &>>(nazgul_node->first,
                                                                                 *nazgul_node->second);
        return tmp;
    }

    Nazgul::Iterator::self &Nazgul::Iterator::operator--() noexcept {
        nazgul_node--;
        current_node = std::make_shared<std::pair<const NazgulName &, Nazgul &>>(nazgul_node->first,
                                                                                 *nazgul_node->second);
        return *this;
    }

    Nazgul::Iterator::self Nazgul::Iterator::operator--(int) noexcept {
        self tmp = *this;
        nazgul_node--;
        current_node = std::make_shared<std::pair<const NazgulName &, Nazgul &>>(nazgul_node->first,
                                                                                 *nazgul_node->second);
        return tmp;
    }

    Nazgul::Iterator::Iterator(std::map<NazgulName, std::unique_ptr<Nazgul>>::iterator node) noexcept:
            current_node(std::make_shared<std::pair<const NazgulName &, Nazgul &>>(node->first, *node->second)),
            nazgul_node(node) {}
} // namespace dp
