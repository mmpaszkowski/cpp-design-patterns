//
// Created by noname on 4/8/24.
//

#include <gtest/gtest.h>
#include <Wizzard.h>
#include <Goblin.h>

using namespace dp;

void verifyGoblin(const Goblin& goblin, const std::string& expectedName, Size expectedSize,
                  Visibility expectedVisibility) {
    ASSERT_EQ(expectedName, goblin.toString());
    ASSERT_EQ(expectedSize, goblin.getSize());
    ASSERT_EQ(expectedVisibility, goblin.getVisibility());
}

TEST(command, test_command)
{

    Wizard wizard;
    Goblin goblin;

    std::string GOBLIN = "Goblin";

    wizard.castSpell([&goblin] { goblin.changeSize(); });
    verifyGoblin(goblin, GOBLIN, Size::Small, Visibility::Visible);

    wizard.castSpell([&goblin] { goblin.changeVisibility(); });
    verifyGoblin(goblin, GOBLIN, Size::Small, Visibility::Invisible);

    wizard.undoLastSpell();
    verifyGoblin(goblin, GOBLIN, Size::Small, Visibility::Visible);

    wizard.undoLastSpell();
    verifyGoblin(goblin, GOBLIN, Size::Normal, Visibility::Visible);

    wizard.redoLastSpell();
    verifyGoblin(goblin, GOBLIN, Size::Small, Visibility::Visible);

    wizard.redoLastSpell();
    verifyGoblin(goblin, GOBLIN, Size::Small, Visibility::Invisible);
}