//
// Created by noname on 4/6/24.
//
#include "Nazgul.h"
#include <memory>

namespace dp
{
const Nazgul& Nazgul::getInstance(NazgulName name)
{
    if (nazguls_.empty())
        init();
    return *nazguls_[name];
}

NazgulName Nazgul::getName() const noexcept { return name_; }

void       Nazgul::init()
{
    struct TemporaryPublicConstructor : public Nazgul
    {
        explicit TemporaryPublicConstructor(NazgulName name) noexcept : Nazgul(name) {}
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

std::map<NazgulName, std::unique_ptr<Nazgul>> Nazgul::nazguls_;
} // namespace dp
