//
// Created by noname on 03.07.23.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <App.h>
#include "FishingBoatAdapter.h"
#include "Capitan.h"

class MockFishingBoatAdapter : public FishingBoatAdapter
{
public:
    MockFishingBoatAdapter() = default;
public:
    MOCK_METHOD(void, row, (), (override));
};


TEST(adapter, test)
{
    auto adapter = new MockFishingBoatAdapter;
    Captain captain(adapter);

    EXPECT_CALL(*adapter, row()).Times(1);
    captain.row();
}