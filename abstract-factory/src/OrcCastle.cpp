//
// Created by noname on 29.06.23.
//

#include "../include/OrcCastle.h"

const std::string OrcCastle::DESCRIPTION = "This is the orc castle!";

const std::string &OrcCastle::getDescription() const noexcept {
    return OrcCastle::DESCRIPTION;
}
