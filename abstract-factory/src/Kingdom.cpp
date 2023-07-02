//
// Created by noname on 02.07.23.
//
#include "../include/Kingdom.h"

KingdomFactory *Kingdom::FactoryMaker::makeFactory(KingdomType type) {
    switch (type) {
        case KingdomType::ELF:
            return new ElfKingdomFactory();
        case KingdomType::ORC:
            return new OrcKingdomFactory();
        default:
            throw std::runtime_error("KingdomType not supported.");
    }
}
