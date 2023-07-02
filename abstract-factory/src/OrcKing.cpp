#include "../include/OrcKing.h"

const std::string OrcKing::DESCRIPTION = "This is the orc king!";

const std::string &OrcKing::getDescription() const noexcept {
    return OrcKing::DESCRIPTION;
}
