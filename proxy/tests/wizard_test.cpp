//
// Created by noname on 4/22/24.
//

#include <Wizard.h>
#include <algorithm>
#include <gtest/gtest.h>

using namespace dp;

TEST(proxy, wizard_test)
{
    std::vector<std::string> wizards{"Gandalf", "Dumbledore", "Oz", "Merlin"};
    std::ranges::for_each(wizards, [](std::string& name) { ASSERT_EQ(name, Wizard(std::string(name)).getName()); });
}