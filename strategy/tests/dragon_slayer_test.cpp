//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <DragonSlayer.h>
#include <MeleeStrategy.h>
#include <ProjectileStrategy.h>

TEST(dragon_slayer, construction)
{
    dp::DragonSlayer dragonSlayer(std::make_shared<dp::MeleeStrategy>());
    ASSERT_NO_THROW(dynamic_cast<const dp::MeleeStrategy&>(dragonSlayer.getStrategy()));
}

TEST(dragon_slayer, change_strategy)
{
    dp::DragonSlayer dragonSlayer(std::make_shared<dp::MeleeStrategy>());
    dragonSlayer.changeStrategy(std::make_shared<dp::ProjectileStrategy>());
    ASSERT_NO_THROW(dynamic_cast<const dp::ProjectileStrategy&>(dragonSlayer.getStrategy()));
}

class MockDragonSlayingStrategy_GoToBattle : public dp::DragonSlayingStrategy
{
public:
    MockDragonSlayingStrategy_GoToBattle() = default;

public:
    MOCK_METHOD(void, execute, (), (const, override));
};

TEST(dragon_slayer, go_to_battle)
{
    auto             strategy = std::make_shared<MockDragonSlayingStrategy_GoToBattle>();
    dp::DragonSlayer dragonSlayer(strategy);
    EXPECT_CALL(*strategy, execute()).Times(1);
    dragonSlayer.goToBattle();


}