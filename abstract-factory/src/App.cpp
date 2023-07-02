//
// Created by noname on 30.06.23.
//

#include <spdlog/spdlog.h>
#include "../include/App.h"

using spdlog::info;


App::App() : kingdom(nullptr) {}

void App::run() {
    info("elf kingdom");
    createKingdom(KingdomType::ELF);
    info(kingdom->getArmy()->getDescription());
    info(kingdom->getCastle()->getDescription());
    info(kingdom->getKing()->getDescription());

    info("orc kingdom");
    createKingdom(KingdomType::ORC);
    info(kingdom->getArmy()->getDescription());
    info(kingdom->getCastle()->getDescription());
    info(kingdom->getKing()->getDescription());
}

void App::createKingdom(KingdomType kingdomType) {
    KingdomFactory *kingdomFactory = Kingdom::FactoryMaker::makeFactory(kingdomType);
    delete kingdom;
    kingdom = new Kingdom();
    kingdom->setKing(kingdomFactory->createKing());
    kingdom->setCastle(kingdomFactory->createCastle());
    kingdom->setArmy(kingdomFactory->createArmy());
    delete kingdomFactory;
}
