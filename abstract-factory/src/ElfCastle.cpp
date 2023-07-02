//
// Created by noname on 01.07.23.
//

#include "../include/ElfCastle.h"

const std::string ElfCastle::DESCRIPTION = "This is the elven castle!";

const std::string &ElfCastle::getDescription() const noexcept {
    return ElfCastle::DESCRIPTION;
}