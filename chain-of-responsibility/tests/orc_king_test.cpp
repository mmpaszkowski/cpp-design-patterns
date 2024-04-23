//
// Created by noname on 4/23/24.
//

#include <OrcKing.h>
#include <gtest/gtest.h>
#include <vector>
#include <algorithm>

using namespace dp;

TEST(chain_of_responsibility, orc_king)
{
    std::vector<Request> requests;
    requests.emplace_back(RequestType::DefendCastle, "Don't let the barbarians enter my castle!!");
    requests.emplace_back(RequestType::TorturePrisoner, "Don't just stand there, tickle him!");
    requests.emplace_back(RequestType::CollectTax, "Don't steal, the King hates competition ...");

    OrcKing king;
    for(Request& request: requests)
    {
        king.makeRequest(request);
        ASSERT_TRUE(request.isHandled());
    }
}