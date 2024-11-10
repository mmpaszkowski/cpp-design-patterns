//
// Created by noname on 30.10.2024.
//

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <array>
#include <Party.h>
#include <PartyMember.h>
#include <Hobbit.h>
#include <Hunter.h>
#include <Rogue.h>
#include <Wizard.h>

class MockPartyMember : public dp::PartyMember
{
public:
    MockPartyMember() = default;

public:
    MOCK_METHOD(void, joinedParty, (std::weak_ptr<dp::Party> party), (noexcept, override));
    MOCK_METHOD(void, partyAction, (dp::Action action), (const, override));
    MOCK_METHOD(void, act, (dp::Action action), (override));
    MOCK_METHOD(std::string, toString, (), (const, noexcept, override));
};

using ::testing::_;

TEST(party_member, joined_party)
{
    auto partyMember1 = std::make_shared<MockPartyMember>();
    auto partyMember2 = std::make_shared<MockPartyMember>();
    auto party        = dp::Party::create();

    EXPECT_CALL(*partyMember1, joinedParty(_)).Times(1);
    EXPECT_CALL(*partyMember2, joinedParty(_)).Times(1);

    party->addMember(partyMember1);
    party->addMember(partyMember2);
}

TEST(party, act_and_party_action)
{
    auto partyMember1 = std::make_shared<MockPartyMember>();
    auto partyMember2 = std::make_shared<MockPartyMember>();
    auto partyMember3 = std::make_shared<MockPartyMember>();

    auto party        = dp::Party::create();

    EXPECT_CALL(*partyMember1, joinedParty(_)).Times(1);
    party->addMember(partyMember1);
    party->act(partyMember1, dp::Action::Gold);

    EXPECT_CALL(*partyMember2, joinedParty(_)).Times(1);
    party->addMember(partyMember2);
    EXPECT_CALL(*partyMember1, partyAction(dp::Action::Enemy)).Times(1);
    party->act(partyMember2, dp::Action::Enemy);

    EXPECT_CALL(*partyMember3, joinedParty(_)).Times(1);
    party->addMember(partyMember3);
    EXPECT_CALL(*partyMember1, partyAction(dp::Action::Hunt)).Times(1);
    EXPECT_CALL(*partyMember2, partyAction(dp::Action::Hunt)).Times(1);
    party->act(partyMember3, dp::Action::Hunt);
}
