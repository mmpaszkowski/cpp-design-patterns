//
// Created by Mateusz Paszkowski on 30.06.2023.
//

#include "../include/App.h"
#include <spdlog/spdlog.h>

using spdlog::info;


void App::run()
{
    info("elf kingdom");
    createKingdom(KingdomType::Elf);
    info(kingdom->getArmy().getDescription());
    info(kingdom->getCastle().getDescription());
    info(kingdom->getKing().getDescription());

    info("orc kingdom");
    createKingdom(KingdomType::Orc);
    info(kingdom->getArmy().getDescription());
    info(kingdom->getCastle().getDescription());
    info(kingdom->getKing().getDescription());
}

void App::createKingdom(const KingdomType kingdomType)
{
    const auto kingdomFactory = Kingdom::FactoryMaker::makeFactory(kingdomType);
    auto       king           = kingdomFactory->createKing();
    auto       castle         = kingdomFactory->createCastle();
    auto       army           = kingdomFactory->createArmy();
    kingdom                   = std::make_unique<Kingdom>(std::move(king), std::move(castle), std::move(army));
}
