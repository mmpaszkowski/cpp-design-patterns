//
// Created by Mateusz Paszkowski on 23.04.2024.
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