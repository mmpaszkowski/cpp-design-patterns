//
// Created by noname on 29.06.23.
//

#include "../include/OrcArmy.h"

const std::string OrcArmy::DESCRIPTION = "This is the orc army!";

const std::string &OrcArmy::getDescription() const noexcept {
    return OrcArmy::DESCRIPTION;
}
