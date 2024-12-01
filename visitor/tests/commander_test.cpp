//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#include <Commander.h>
#include <CommanderVisitor.h>
#include <Sergeant.h>
#include <UnitVisitor.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using testing::_;

TEST(commander, construction)
{
    dp::Commander commander;
    ASSERT_EQ(commander.size(), 0ull);
}

TEST(commander, parametrized_construction)
{
    dp::Commander commander(std::initializer_list<std::shared_ptr<dp::Unit>>{std::make_shared<dp::Sergeant>(),
                                                                             std::make_shared<dp::Sergeant>()});

    ASSERT_EQ(commander.size(), 2ull);
}


TEST(commander, to_string)
{
    dp::Commander commander;
    ASSERT_EQ(commander.toString(), "commander");
}

class MockUnit : public dp::Unit
{
public:
    MockUnit() = default;

public:
    std::string toString() const override { return "mock unit"; };
    MOCK_METHOD(void, accept, (const dp::UnitVisitor&), (const, override));
};

TEST(commander, accept)
{
    auto mockUnit1 = std::make_shared<MockUnit>();
    auto mockUnit2 = std::make_shared<MockUnit>();

    dp::Commander commander{mockUnit1, mockUnit2};
    EXPECT_CALL(*mockUnit1, accept(_)).Times(1);
    EXPECT_CALL(*mockUnit2, accept(_)).Times(1);

    commander.accept(dp::CommanderVisitor());
}