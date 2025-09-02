//
// Created by Mateusz Paszkowski on 22.04.2024.
//

#include <IvoryTower.h>
#include <WizardTowerProxy.h>
#include <algorithm>
#include <gtest/gtest.h>

using namespace dp;

TEST(proxy, wizard_tower_proxy_test)
{
    std::vector<std::unique_ptr<Wizard>> wizards;
    wizards.push_back(std::make_unique<Wizard>("Gandalf"));
    wizards.push_back(std::make_unique<Wizard>("Dumbledore"));
    wizards.push_back(std::make_unique<Wizard>("Oz"));
    wizards.push_back(std::make_unique<Wizard>("Merlin"));

    WizardTowerProxy tower(std::make_unique<IvoryTower>());
    testing::internal::CaptureStdout();
    std::ranges::for_each(wizards, [&tower](std::unique_ptr<Wizard>& wizard) { tower.enter(std::move(wizard)); });
    std::string logs = testing::internal::GetCapturedStdout();

    ASSERT_TRUE(logs.contains("Gandalf enters the tower."));
    ASSERT_TRUE(logs.contains("Dumbledore enters the tower."));
    ASSERT_TRUE(logs.contains("Oz enters the tower."));
    ASSERT_TRUE(logs.contains("Merlin is not allowed to enter!"));
    ASSERT_EQ(4, std::ranges::count(logs, '\n'));
}