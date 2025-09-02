//
// Created by Mateusz Paszkowski on 23.04.2024.
//

#include "OrcCommander.h"

namespace dp
{

void OrcCommander::handle(Request& req) const noexcept
{
    req.markHandled();
    spdlog::info(name() + " handling request \"{" + req.toString() + "}\"");
}
}