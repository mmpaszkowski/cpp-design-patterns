//
// Created by noname on 4/23/24.
//

#include "OrcOfficer.h"

namespace dp
{

void OrcOfficer::handle(Request& req) const noexcept
{
    req.markHandled();
    spdlog::info(name() + " handling request \"{" + req.toString() + "}\"");
}
}