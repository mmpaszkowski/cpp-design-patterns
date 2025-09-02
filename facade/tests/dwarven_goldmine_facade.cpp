//
// Created by Mateusz Paszkowski on 17.04.2024.
//

#include <gtest/gtest.h>
#include <DwarvenGoldmineFacade.h>

using namespace dp;

TEST(facade, dwarven_goldmine_facade_test)
{
    testing::internal::CaptureStdout();

    DwarvenGoldmineFacade goldMine;
    goldMine.startNewDay();
    std::string logs = testing::internal::GetCapturedStdout();

    // On the start of a day, all workers should wake up ...
    ASSERT_TRUE(logs.contains("Dwarf gold digger wakes up."));
    ASSERT_TRUE(logs.contains("Dwarf cart operator wakes up."));
    ASSERT_TRUE(logs.contains("Dwarven tunnel digger wakes up."));

    // ... and go to the mine
    ASSERT_TRUE(logs.contains("Dwarf gold digger goes to the mine."));
    ASSERT_TRUE(logs.contains("Dwarf cart operator goes to the mine."));
    ASSERT_TRUE(logs.contains("Dwarven tunnel digger goes to the mine."));

    // No other actions were invoked, so the workers shouldn't have done (printed) anything else
    ASSERT_EQ(6, std::ranges::count(logs, '\n'));

    // Now do some actual work, start digging gold!
    testing::internal::CaptureStdout();
    goldMine.digOutGold();
    logs = testing::internal::GetCapturedStdout();

    // Since we gave the dig command, every worker should be doing it's job ...
    ASSERT_TRUE(logs.contains("Dwarf gold digger digs for gold."));
    ASSERT_TRUE(logs.contains("Dwarf cart operator moves gold chunks out of the mine."));
    ASSERT_TRUE(logs.contains("Dwarven tunnel digger creates another promising tunnel."));

    // Again, they shouldn't be doing anything else.
    ASSERT_EQ(3, std::ranges::count(logs, '\n'));

    // Enough gold, lets end the day.
    testing::internal::CaptureStdout();
    goldMine.endDay();
    logs = testing::internal::GetCapturedStdout();

    // Check if the workers go home ...
    ASSERT_TRUE(logs.contains("Dwarf gold digger goes home."));
    ASSERT_TRUE(logs.contains("Dwarf cart operator goes home."));
    ASSERT_TRUE(logs.contains("Dwarven tunnel digger goes home."));

    // ... and go to sleep. We need well rested workers the next day :)
    ASSERT_TRUE(logs.contains("Dwarf gold digger goes to sleep."));
    ASSERT_TRUE(logs.contains("Dwarf cart operator goes to sleep."));
    ASSERT_TRUE(logs.contains("Dwarven tunnel digger goes to sleep."));

    // Every worker should be sleeping now, no other actions allowed
    ASSERT_EQ(6, std::ranges::count(logs, '\n'));
}