//
// Created by Mateusz Paszkowski on 30.06.2023.
//

#include "App.h"
#include <spdlog/spdlog.h>

using spdlog::info;

namespace dp
{
void App::run()
{
    for (const auto type : {KingdomType::Elf, KingdomType::Orc})
    {
        setUpKingdom(type);
        logKingdomDetails(type);
    }
}

void App::setUpKingdom(const KingdomType kingdomType)
{
    const auto kingdomFactory = KingdomFactoryMaker::makeFactory(kingdomType);
    auto       king           = kingdomFactory->createKing();
    auto       castle         = kingdomFactory->createCastle();
    auto       army           = kingdomFactory->createArmy();
    kingdom_                  = std::make_unique<Kingdom>(
        std::move(king), std::move(castle), std::move(army));
}

void App::logKingdomDetails(const KingdomType kingdomType)
{
    info("{} kingdom", to_string(kingdomType));
    info(kingdom_->getArmy().getDescription());
    info(kingdom_->getCastle().getDescription());
    info(kingdom_->getKing().getDescription());
}
} // namespace dp