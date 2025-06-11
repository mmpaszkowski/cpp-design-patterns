//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include "../include/Kingdom.h"
#include "ElfKingdomFactory.h"
#include "OrcKingdomFactory.h"

std::unique_ptr<KingdomFactory> Kingdom::FactoryMaker::makeFactory(KingdomType type)
{
    switch (type)
    {
        case KingdomType::Elf: return std::make_unique<ElfKingdomFactory>();
        case KingdomType::Orc: return std::make_unique<OrcKingdomFactory>();
        default: throw std::runtime_error("KingdomType not supported.");
    }
}

Kingdom::Kingdom(std::unique_ptr<King>&& king, std::unique_ptr<Castle>&& castle, std::unique_ptr<Army>&& army)
    : king_(std::move(king)), castle_(std::move(castle)), army_(std::move(army))
{
}
