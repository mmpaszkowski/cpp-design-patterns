//
// Created by noname on 4/10/24.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <Sword.h>
#include <Hammer.h>
#include <Enchantment.h>

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
    auto mock_enchantment = MockEnchantment();
    Sword sword(mock_enchantment);
    EXPECT_CALL(mock_enchantment, apply()).Times(1);
    EXPECT_CALL(mock_enchantment, onActivate()).Times(1);
    EXPECT_CALL(mock_enchantment, onDeactivate()).Times(1);

    sword.swing();
    sword.wield();
    sword.unwield();
}

TEST(bridge, hammer)
{
    auto mock_enchantment = MockEnchantment();
    Hammer hammer(mock_enchantment);
    EXPECT_CALL(mock_enchantment, apply()).Times(1);
    EXPECT_CALL(mock_enchantment, onActivate()).Times(1);
    EXPECT_CALL(mock_enchantment, onDeactivate()).Times(1);

    hammer.swing();
    hammer.wield();
    hammer.unwield();
}