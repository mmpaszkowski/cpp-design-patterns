//
// Created by noname on 29.06.23.
//

#include "../include/ElfKing.h"

const std::string ElfKing::DESCRIPTION = "This is the elven king!";

const std::string &ElfKing::getDescription() const noexcept {
    return ElfKing::DESCRIPTION;
}