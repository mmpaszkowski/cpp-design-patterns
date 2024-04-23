//
// Created by noname on 4/23/24.
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