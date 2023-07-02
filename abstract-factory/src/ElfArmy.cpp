//
// Created by noname on 29.06.23.
//

#include "../include/ElfArmy.h"

const std::string ElfArmy::DESCRIPTION = "This is the elven army!";

const std::string &ElfArmy::getDescription() const noexcept {
    return ElfArmy::DESCRIPTION;
}
