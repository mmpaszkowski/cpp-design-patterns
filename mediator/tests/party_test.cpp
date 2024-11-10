//
// Created by noname on 29.10.2024.
//

#include <App.h>
#include <PartyMember.h>
#include <Party.h>
#include <Hobbit.h>
#include <Hunter.h>
#include <Rogue.h>
#include <Wizard.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>



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

TEST(party, add_member_and_size)
{
    auto hobbit = dp::Hobbit::create();
    auto hunter = dp::Hunter::create();
    auto rogue  = dp::Rogue::create();
    auto wizard = dp::Wizard::create();
    auto party  = dp::Party::create();

    ASSERT_EQ(party->size(), 0);
    party->addMember(hobbit);
    ASSERT_EQ(party->size(), 1);
    party->addMember(hunter);
    ASSERT_EQ(party->size(), 2);
    party->addMember(rogue);
    ASSERT_EQ(party->size(), 3);
    party->addMember(wizard);
    ASSERT_EQ(party->size(), 4);
}

