//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include "Kingdom.h"
#include "ElfKingdomFactory.h"
#include "OrcKingdomFactory.h"

#include <stdexcept>

namespace dp
{
std::unique_ptr<KingdomFactory> KingdomFactoryMaker::makeFactory(KingdomType type)
{
    switch (type)
    {
        case KingdomType::Elf: return std::make_unique<ElfKingdomFactory>();
        case KingdomType::Orc: return std::make_unique<OrcKingdomFactory>();
        default: throw std::invalid_argument("Unknown KingdomType enum value");
    }
}

Kingdom::Kingdom(std::unique_ptr<King>&& king, std::unique_ptr<Castle>&& castle, std::unique_ptr<Army>&& army) noexcept
    : king_(std::move(king)), castle_(std::move(castle)), army_(std::move(army))
{
}

std::string_view to_string(KingdomType type)
{
    switch (type)
    {
        case KingdomType::Elf: return "elf";
        case KingdomType::Orc: return "orc";
        default: throw std::invalid_argument("Unknown KingdomType enum value");
    }
}

} // namespace dp