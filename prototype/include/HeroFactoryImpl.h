//
// Created by Mateusz Paszkowski on 02.04.2024.
//

#ifndef HERO_FACTORY_IMPL_H
#define HERO_FACTORY_IMPL_H

#include "Beast.h"
#include "HeroFactory.h"
#include "Mage.h"
#include "Warlord.h"

namespace dp
{

class HeroFactoryImpl : public HeroFactory
{
public:
    explicit HeroFactoryImpl(std::unique_ptr<Mage>&&    mage,
                                       std::unique_ptr<Warlord>&& warlord,
                                       std::unique_ptr<Beast>&&   beast) noexcept;

    ~HeroFactoryImpl() override;

    [[nodiscard]] std::unique_ptr<Mage>    createMage() const override;
    [[nodiscard]] std::unique_ptr<Warlord> createWarlord() const override;
    [[nodiscard]] std::unique_ptr<Beast>   createBeast() const override;

private:
    std::unique_ptr<Mage>    mage_;
    std::unique_ptr<Warlord> warlord_;
    std::unique_ptr<Beast>   beast_;
};

HeroFactoryImpl::HeroFactoryImpl(std::unique_ptr<Mage>&&    mage,
                                           std::unique_ptr<Warlord>&& warlord,
                                           std::unique_ptr<Beast>&&   beast) noexcept
    : mage_(std::move(mage)), warlord_(std::move(warlord)), beast_(std::move(beast))
{
}

 HeroFactoryImpl::~HeroFactoryImpl() = default;
 std::unique_ptr<Mage> HeroFactoryImpl::createMage() const
{
    return mage_->clone();
}

std::unique_ptr<Warlord> HeroFactoryImpl::createWarlord() const
{
    return warlord_->clone();
}

std::unique_ptr<Beast> HeroFactoryImpl::createBeast() const
{
    return beast_->clone();
}

} // namespace dp

#endif //HERO_FACTORY_IMPL_H
