//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>

#include <OrcBeast.h>
#include <OrcMage.h>
#include <OrcWarlord.h>
#include <ElfBeast.h>
#include <ElfMage.h>
#include <ElfWarlord.h>

using namespace dp;

TEST(prototype, test_prototype)
{
    auto orcBeast = std::make_unique<OrcBeast>("axe");
    ASSERT_NE(orcBeast, nullptr);
    ASSERT_NE(orcBeast, orcBeast->clone());
    ASSERT_NE(dynamic_cast<OrcBeast*>(orcBeast->clone().get()), nullptr);
    ASSERT_EQ(dynamic_cast<OrcBeast&>(*orcBeast->clone().get()), *orcBeast);

    auto orcMage = std::make_unique<OrcMage>("sword");
    ASSERT_NE(orcMage, nullptr);
    ASSERT_NE(orcMage, orcMage->clone());
    ASSERT_NE(dynamic_cast<OrcMage*>(orcMage->clone().get()), nullptr);
    ASSERT_EQ(dynamic_cast<OrcMage&>(*orcMage->clone().get()), *orcMage);

    auto orcWarlord = std::make_unique<OrcWarlord>("laser");
    ASSERT_NE(orcWarlord, nullptr);
    ASSERT_NE(orcWarlord, orcWarlord->clone());
    ASSERT_NE(dynamic_cast<OrcWarlord*>(orcWarlord->clone().get()), nullptr);
    ASSERT_EQ(dynamic_cast<OrcWarlord&>(*orcWarlord->clone().get()), *orcWarlord);

    auto elfBeast = std::make_unique<ElfBeast>("cooking");
    ASSERT_NE(elfBeast, nullptr);
    ASSERT_NE(elfBeast, elfBeast->clone());
    ASSERT_NE(dynamic_cast<ElfBeast*>(elfBeast->clone().get()), nullptr);
    ASSERT_EQ(dynamic_cast<ElfBeast&>(*elfBeast->clone().get()), *elfBeast);

    auto elfMage = std::make_unique<ElfMage>("cleaning");
    ASSERT_NE(elfMage, nullptr);
    ASSERT_NE(elfMage, elfMage->clone());
    ASSERT_NE(dynamic_cast<ElfMage*>(elfMage->clone().get()), nullptr);
    ASSERT_EQ(dynamic_cast<ElfMage&>(*elfMage->clone().get()), *elfMage);

    auto elfWarlord = std::make_unique<ElfWarlord>("protecting");
    ASSERT_NE(elfWarlord, nullptr);
    ASSERT_NE(elfWarlord, elfWarlord->clone());
    ASSERT_NE(dynamic_cast<ElfWarlord*>(elfWarlord->clone().get()), nullptr);
    ASSERT_EQ(dynamic_cast<ElfWarlord&>(*elfWarlord->clone().get()), *elfWarlord);
}