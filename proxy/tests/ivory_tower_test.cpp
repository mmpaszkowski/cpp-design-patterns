//
// Created by noname on 4/22/24.
//

#include <IvoryTower.h>
#include <algorithm>
#include <gtest/gtest.h>

using namespace dp;

TEST(proxy, ivory_tower_test)
{
    std::vector<std::unique_ptr<Wizard>> wizards;
    wizards.push_back(std::make_unique<Wizard>("Gandalf"));
    wizards.push_back(std::make_unique<Wizard>("Dumbledore"));
    wizards.push_back(std::make_unique<Wizard>("Oz"));
    wizards.push_back(std::make_unique<Wizard>("Merlin"));

    IvoryTower tower;
    testing::internal::CaptureStdout();
    std::ranges::for_each(wizards, [&tower](std::unique_ptr<Wizard>& wizard) { tower.enter(std::move(wizard)); });
    std::string logs = testing::internal::GetCapturedStdout();

    ASSERT_TRUE(logs.contains("Gandalf enters the tower."));
    ASSERT_TRUE(logs.contains("Dumbledore enters the tower."));
    ASSERT_TRUE(logs.contains("Oz enters the tower."));
    ASSERT_TRUE(logs.contains("Merlin enters the tower."));
    ASSERT_EQ(4, std::ranges::count(logs, '\n'));
}