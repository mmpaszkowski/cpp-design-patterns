//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include <utility>

#include "App.h"
#include "OrcKing.h"

using namespace dp;

void App::run() const
{
    OrcKing king;
    king.makeRequest(Request(RequestType::DefendCastle, "defend castle"));
    king.makeRequest(Request(RequestType::DefendCastle, "defend castle"));
    king.makeRequest(Request(RequestType::TorturePrisoner, "torture prisoner"));
    king.makeRequest(Request(RequestType::CollectTax, "collect tax"));
}
