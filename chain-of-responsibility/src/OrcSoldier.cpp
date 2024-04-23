//
// Created by noname on 4/23/24.
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