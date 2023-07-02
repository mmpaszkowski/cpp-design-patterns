//
// Created by noname on 01.07.23.
//
#include <gtest/gtest.h>
#include <App.h>

template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

TEST(abstract_factory, verify_king_creation)
{
    App app = App();

    app.createKingdom(KingdomType::ELF);
    auto kingdom = app.getKingdom();
    King* elfKing = kingdom->getKing();
    GTEST_ASSERT_EQ(ElfKing::DESCRIPTION, elfKing->getDescription());
    GTEST_ASSERT_TRUE(instanceof<ElfKing>(elfKing));

    app.createKingdom(KingdomType::ORC);
    kingdom = app.getKingdom();
    auto orcKing = kingdom->getKing();
    GTEST_ASSERT_EQ(OrcKing::DESCRIPTION, orcKing->getDescription());
    GTEST_ASSERT_TRUE(instanceof<OrcKing>(orcKing));
}

TEST(abstract_factory, verify_castle_creation)
{
    App app = App();

    app.createKingdom(KingdomType::ELF);
    auto kingdom = app.getKingdom();
    Castle* elfCastle = kingdom->getCastle();
    GTEST_ASSERT_EQ(ElfCastle::DESCRIPTION, elfCastle->getDescription());
    GTEST_ASSERT_TRUE(instanceof<ElfCastle>(elfCastle));

    app.createKingdom(KingdomType::ORC);
    kingdom = app.getKingdom();
    auto orcCastle = kingdom->getCastle();
    GTEST_ASSERT_EQ(OrcCastle::DESCRIPTION, orcCastle->getDescription());
    GTEST_ASSERT_TRUE(instanceof<OrcCastle>(orcCastle));
}

TEST(abstract_factory, verify_army_creation)
{
    App app = App();

    app.createKingdom(KingdomType::ELF);
    auto kingdom = app.getKingdom();
    Army* elfArmy = kingdom->getArmy();
    GTEST_ASSERT_EQ(ElfArmy::DESCRIPTION, elfArmy->getDescription());
    GTEST_ASSERT_TRUE(instanceof<ElfArmy>(elfArmy));

    app.createKingdom(KingdomType::ORC);
    kingdom = app.getKingdom();
    auto orcArmy = kingdom->getArmy();
    GTEST_ASSERT_EQ(OrcArmy::DESCRIPTION, orcArmy->getDescription());
    GTEST_ASSERT_TRUE(instanceof<OrcArmy>(orcArmy));
}

TEST(abstract_factory, verify_elf_kingdom_creation)
{
    App app = App();
    app.createKingdom(KingdomType::ELF);
    auto kingdom = app.getKingdom();

    auto king = kingdom->getKing();
    auto castle = kingdom->getCastle();
    auto army = kingdom->getArmy();
    GTEST_ASSERT_TRUE(instanceof<ElfKing>(king));
    GTEST_ASSERT_EQ(ElfKing::DESCRIPTION, king->getDescription());
    GTEST_ASSERT_TRUE(instanceof<ElfCastle>(castle));
    GTEST_ASSERT_EQ(ElfCastle::DESCRIPTION, castle->getDescription());
    GTEST_ASSERT_TRUE(instanceof<ElfArmy>(army));
    GTEST_ASSERT_EQ(ElfArmy::DESCRIPTION, army->getDescription());
}

TEST(abstract_factory, verify_orc_kingdom_creation)
{
    App app = App();
    app.createKingdom(KingdomType::ORC);
    auto kingdom = app.getKingdom();

    auto king = kingdom->getKing();
    auto castle = kingdom->getCastle();
    auto army = kingdom->getArmy();
    GTEST_ASSERT_TRUE(instanceof<OrcKing>(king));
    GTEST_ASSERT_EQ(OrcKing::DESCRIPTION, king->getDescription());
    GTEST_ASSERT_TRUE(instanceof<OrcCastle>(castle));
    GTEST_ASSERT_EQ(OrcCastle::DESCRIPTION, castle->getDescription());
    GTEST_ASSERT_TRUE(instanceof<OrcArmy>(army));
    GTEST_ASSERT_EQ(OrcArmy::DESCRIPTION, army->getDescription());
}