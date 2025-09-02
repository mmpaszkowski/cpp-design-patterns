//
// Created by Mateusz Paszkowski on 10.04.2024.
//

#include <Enchantment.h>
#include <Hammer.h>
#include <Sword.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace dp;

class MockEnchantment : public Enchantment
{
public:
    MockEnchantment() = default;

public:
    MOCK_METHOD(void, onActivate, (), (const, noexcept, override));
    MOCK_METHOD(void, apply, (), (const, noexcept, override));
    MOCK_METHOD(void, onDeactivate, (), (const, noexcept, override));
};

TEST(bridge, sword)
{
    Sword                  sword(std::make_unique<MockEnchantment>());
    const MockEnchantment& mock_enchantment = dynamic_cast<const MockEnchantment&>(sword.getEnchantment());
    EXPECT_CALL(mock_enchantment, apply()).Times(1);
    EXPECT_CALL(mock_enchantment, onActivate()).Times(1);
    EXPECT_CALL(mock_enchantment, onDeactivate()).Times(1);

    sword.swing();
    sword.wield();
    sword.unwield();
}

TEST(bridge, hammer)
{
    Hammer                 hammer(std::make_unique<MockEnchantment>());
    const MockEnchantment& mock_enchantment = dynamic_cast<const MockEnchantment&>(hammer.getEnchantment());
    EXPECT_CALL(mock_enchantment, apply()).Times(1);
    EXPECT_CALL(mock_enchantment, onActivate()).Times(1);
    EXPECT_CALL(mock_enchantment, onDeactivate()).Times(1);

    hammer.swing();
    hammer.wield();
    hammer.unwield();
}