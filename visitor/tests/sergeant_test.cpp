//
// Created by Mateusz Paszkowski on 30.11.2024.
//

#include <Sergeant.h>
#include <SergeantVisitor.h>
#include <Sergeant.h>
#include <Soldier.h>
#include <UnitVisitor.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using testing::_;

TEST(sergeant, construction)
{
    dp::Sergeant sergeant;
    ASSERT_EQ(sergeant.size(), 0ull);
}

TEST(sergeant, parametrized_construction)
{
    dp::Sergeant sergeant(std::initializer_list<std::shared_ptr<dp::Unit>>{std::make_shared<dp::Soldier>(),
                                                                           std::make_shared<dp::Soldier>()});

    ASSERT_EQ(sergeant.size(), 2ull);
}


TEST(sergeant, to_string)
{
    dp::Sergeant sergeant;
    ASSERT_EQ(sergeant.toString(), "sergeant");
}

class MockUnit : public dp::Unit
{
public:
    MockUnit() = default;

public:
    std::string toString() const override { return "mock unit"; };
    MOCK_METHOD(void, accept, (const dp::UnitVisitor&), (const, override));
};

TEST(sergeant, accept)
{
    auto mockUnit1 = std::make_shared<MockUnit>();
    auto mockUnit2 = std::make_shared<MockUnit>();

    dp::Sergeant commander{mockUnit1, mockUnit2};
    EXPECT_CALL(*mockUnit1, accept(_)).Times(1);
    EXPECT_CALL(*mockUnit2, accept(_)).Times(1);

    commander.accept(dp::SergeantVisitor());
}