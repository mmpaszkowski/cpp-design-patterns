//
// Created by Mateusz Paszkowski on 04.11.2024.
//

#include <Wizard.h>
#include <gtest/gtest.h>

TEST(wizard, create)
{
    auto hobbit = dp::Wizard::create();
    ASSERT_TRUE(hobbit);
}

TEST(wizard, to_string)
{
    auto hobbit = dp::Wizard::create();
    ASSERT_EQ(hobbit->toString(), "Wizard");
}
