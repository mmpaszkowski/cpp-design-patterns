//
// Created by Mateusz Paszkowski on 30.10.2024.
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

class MockPartyMember_JoinedParty : public dp::PartyMember
{
public:
    MockPartyMember_JoinedParty() = default;

public:
    MOCK_METHOD(void, joinedParty, (std::weak_ptr<dp::Party> party), (noexcept, override));
    std::string toString() const noexcept override { return "MockPartyMember_JoinedParty"; }
};

using ::testing::_;

TEST(party_member, joined_party)
{
    auto partyMember1 = std::make_shared<MockPartyMember_JoinedParty>();
    auto partyMember2 = std::make_shared<MockPartyMember_JoinedParty>();
    auto party        = dp::Party::create();

    EXPECT_CALL(*partyMember1, joinedParty(_)).Times(1);
    EXPECT_CALL(*partyMember2, joinedParty(_)).Times(1);

    party->addMember(partyMember1);
    party->addMember(partyMember2);
}

class MockPartyMember_PartyAction : public dp::PartyMember
{
public:
    MockPartyMember_PartyAction() = default;

public:
    MOCK_METHOD(void, partyAction, (dp::Action action), (const, override));
    std::string toString() const noexcept override { return "MockPartyMember_PartyAction"; }
};

TEST(party_member, party_action)
{
    auto partyMember1 = std::make_shared<MockPartyMember_PartyAction>();
    auto partyMember2 = std::make_shared<MockPartyMember_PartyAction>();
    auto partyMember3 = std::make_shared<MockPartyMember_PartyAction>();

    auto party        = dp::Party::create();

    party->addMember(partyMember1);
    partyMember1->act(dp::Action::Gold);

    party->addMember(partyMember2);
    EXPECT_CALL(*partyMember1, partyAction(dp::Action::Enemy)).Times(1);
    partyMember2->act(dp::Action::Enemy);

    party->addMember(partyMember3);
    EXPECT_CALL(*partyMember1, partyAction(dp::Action::Hunt)).Times(1);
    EXPECT_CALL(*partyMember2, partyAction(dp::Action::Hunt)).Times(1);
    partyMember3->act(dp::Action::Hunt);
}

TEST(party_member, act_and_party_action)
{
    auto partyMember1 = std::make_shared<MockPartyMember_PartyAction>();
    auto partyMember2 = std::make_shared<MockPartyMember_PartyAction>();
    auto partyMember3 = std::make_shared<MockPartyMember_PartyAction>();

    auto party = dp::Party::create();

    party->addMember(partyMember1);
    partyMember1->act(dp::Action::Gold);

    party->addMember(partyMember2);
    EXPECT_CALL(*partyMember1, partyAction(dp::Action::Enemy)).Times(1);
    partyMember2->act(dp::Action::Enemy);

    party->addMember(partyMember3);
    EXPECT_CALL(*partyMember1, partyAction(dp::Action::Hunt)).Times(1);
    EXPECT_CALL(*partyMember2, partyAction(dp::Action::Hunt)).Times(1);
    partyMember3->act(dp::Action::Hunt);
}
