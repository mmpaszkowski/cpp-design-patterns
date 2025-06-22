//
// Created by Mateusz Paszkowski on 22.06.2025.
//

#include "FishingBoat.h"
#include <spdlog/spdlog.h>

using spdlog::info;

namespace dp
{
void FishingBoat::sail() const { info("The fishing boat is sailing"); }
} // namespace dp
