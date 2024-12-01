//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#include <HalflingThief.h>
#include <HitAndRunMethod.h>
#include <SubtleMethod.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using testing::_;

TEST(halflink_thief, construction)
{
    dp::HalflingThief halflingThief(std::make_shared<dp::HitAndRunMethod>());
    ASSERT_NO_THROW(dynamic_cast<const dp::HitAndRunMethod&>(halflingThief.getStealingMethod()));
}

TEST(halflink_thief, change_method)
{
    dp::HalflingThief dragonSlayer(std::make_shared<dp::HitAndRunMethod>());
    dragonSlayer.changeMethod(std::make_shared<dp::SubtleMethod>());
    ASSERT_NO_THROW(dynamic_cast<const dp::SubtleMethod&>(dragonSlayer.getStealingMethod()));
}

class MockStealingMethod : public dp::StealingMethod
{
public:
    MockStealingMethod() = default;

public:
    std::string pickTarget() const override { return "victim"; };
    MOCK_METHOD(void, confuseTarget, (const std::string&), (override));
    MOCK_METHOD(void, stealTheItem, (const std::string&), (override));
};

TEST(halflink_thief, steal)
{
    auto              method = std::make_shared<MockStealingMethod>();
    dp::HalflingThief thief(method);

    EXPECT_CALL(*method, confuseTarget(std::string("victim"))).Times(1);
    EXPECT_CALL(*method, stealTheItem(std::string("victim"))).Times(1);
    thief.steal();
}