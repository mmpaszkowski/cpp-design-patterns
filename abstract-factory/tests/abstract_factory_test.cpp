//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <App.h>
#include <ElfArmy.h>
#include <ElfCastle.h>
#include <ElfKing.h>
#include <OrcArmy.h>
#include <OrcCastle.h>
#include <OrcKing.h>
#include <gtest/gtest.h>

using namespace dp;

struct KingdomTestParams
{
    KingdomType      kingdomType;
    std::string_view expectedKingDescription;
    std::string_view expectedCastleDescription;
    std::string_view expectedArmyDescription;
};

class AbstractFactory : public ::testing::TestWithParam<KingdomTestParams>
{
protected:
    void                         SetUp() override { app.setUpKingdom(GetParam().kingdomType); }
    [[nodiscard]] const Kingdom& getKingdom() const { return app.getKingdom(); }

private:
    App app;
};

INSTANTIATE_TEST_SUITE_P(
    AbstractFactoryTest,
    AbstractFactory,
    ::testing::Values(
        KingdomTestParams{KingdomType::Elf, ElfKing::DESCRIPTION, ElfCastle::DESCRIPTION, ElfArmy::DESCRIPTION},
        KingdomTestParams{KingdomType::Orc, OrcKing::DESCRIPTION, OrcCastle::DESCRIPTION, OrcArmy::DESCRIPTION}));

TEST_P(AbstractFactory, CreatedKingdom_HasCorrectKing)
{
    const auto& king = getKingdom().getKing();
    ASSERT_EQ(GetParam().expectedKingDescription, king.getDescription());
}

TEST_P(AbstractFactory, CreatedKingdom_HasCorrectCastle)
{
    const auto& castle = getKingdom().getCastle();
    ASSERT_EQ(GetParam().expectedCastleDescription, castle.getDescription());
}

TEST_P(AbstractFactory, CreatedKingdom_HasCorrectArmy)
{
    const auto& army = getKingdom().getArmy();
    ASSERT_EQ(GetParam().expectedArmyDescription, army.getDescription());
}
