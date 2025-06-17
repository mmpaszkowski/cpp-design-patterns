//
// Created by Mateusz Paszkowski on 30.06.2023.
//

#include "../include/App.h"
#include <spdlog/spdlog.h>

using spdlog::info;

namespace dp
{
void App::run()
{
    info("elf kingdom");
    setUpKingdom(KingdomType::Elf);
    info(kingdom_->getArmy().getDescription());
    info(kingdom_->getCastle().getDescription());
    info(kingdom_->getKing().getDescription());

    info("orc kingdom");
    setUpKingdom(KingdomType::Orc);
    info(kingdom_->getArmy().getDescription());
    info(kingdom_->getCastle().getDescription());
    info(kingdom_->getKing().getDescription());
}

void App::setUpKingdom(const KingdomType kingdomType)
{
    const auto kingdomFactory = KingdomFactoryMaker::makeFactory(kingdomType);
    auto       king           = kingdomFactory->createKing();
    auto       castle         = kingdomFactory->createCastle();
    auto       army           = kingdomFactory->createArmy();
    kingdom_                  = std::make_unique<Kingdom>(std::move(king), std::move(castle), std::move(army));
}
} // namespace dp