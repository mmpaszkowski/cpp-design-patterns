//
// Created by Mateusz Paszkowski on 23.04.2024.
//

#include "OrcKing.h"

namespace dp
{
dp::OrcKing::OrcKing()
    : handlers([](const std::unique_ptr<RequestHandler>& a, const std::unique_ptr<RequestHandler>& b) -> bool {
          return a->getPriority() < b->getPriority();
      })
{
    handlers.insert(std::make_unique<OrcCommander>());
    handlers.insert(std::make_unique<OrcOfficer>());
    handlers.insert(std::make_unique<OrcSoldier>());
}


} // namespace dp