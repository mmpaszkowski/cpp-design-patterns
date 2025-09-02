//
// Created by Mateusz Paszkowski on 23.04.2024.
//

#include "OrcSoldier.h"

namespace dp
{
void OrcSoldier::handle(Request& req) const noexcept
{
    req.markHandled();
    spdlog::info(name() + " handling request \"{" + req.toString() + "}\"");
}
}