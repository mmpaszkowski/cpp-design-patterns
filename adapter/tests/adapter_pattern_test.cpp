//
// Created by Mateusz Paszkowski on 03.07.2023.
//

#include "Captain.h"
#include "FishingBoatAdapter.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

/**
 * @class MockFishingBoatAdapter
 * @brief Mock class for FishingBoatAdapter to allow verification of row() calls.
 */
class MockFishingBoatAdapter : public dp::FishingBoatAdapter
{
public:
    MockFishingBoatAdapter() = default;

    MOCK_METHOD(void, row, (), (override));
};

TEST(AdapterPattern, CaptainShouldDelegateRowingToAdapter)
{
    // Given: A Captain with a mock FishingBoatAdapter
    auto adapter = std::make_unique<MockFishingBoatAdapter>();

    EXPECT_CALL(*adapter, row())
        .Times(1)
        .WillOnce(::testing::Return());

    dp::Captain captain(std::move(adapter));

    // When: The captain rows
    captain.row();

    // Then: The adapter's row() should have been called once
    // (already checked by EXPECT_CALL)
}