//
// Created by noname on 4/13/24.
//

#include <ClubbedTroll.h>
#include <SimpleTroll.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace dp;
using ::testing::StrictMock;

class SimpleTrollMock : public SimpleTroll
{
public:
    SimpleTrollMock() : SimpleTroll()
    {
        ON_CALL(*this, attack).WillByDefault([this]() {
            return SimpleTroll::attack();
        });
        ON_CALL(*this, getAttackPower).WillByDefault([this]() {
            return SimpleTroll::getAttackPower();
        });
        ON_CALL(*this, fleeBattle).WillByDefault([this]() {
            return SimpleTroll::fleeBattle();
        });
    }

public:
    MOCK_METHOD(void, attack, (), (override));
    MOCK_METHOD(int, getAttackPower, (), (noexcept, override));
    MOCK_METHOD(void, fleeBattle, (), (override));


};

TEST(decorator, test_clubbed_troll)
{
    auto simple_troll_mock = new StrictMock<SimpleTrollMock>();
    ClubbedTroll clubbed((std::unique_ptr<StrictMock<SimpleTrollMock>>(simple_troll_mock)));
    EXPECT_CALL(*simple_troll_mock, getAttackPower()).Times(1);
    ASSERT_EQ(20, clubbed.getAttackPower());

    // Check if the clubbed troll actions are delegated to the decorated troll
    EXPECT_CALL(*simple_troll_mock, attack()).Times(1);
    clubbed.attack();

    EXPECT_CALL(*simple_troll_mock, fleeBattle()).Times(1);
    clubbed.fleeBattle();
}
