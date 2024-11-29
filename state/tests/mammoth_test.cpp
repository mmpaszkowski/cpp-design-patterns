//
// Created by Mateusz Paszkowski on 28.11.2024.
//

#include <gtest/gtest.h>
#include <Mammoth.h>
#include <PeacefulState.h>
#include <AngryState.h>

TEST(mammoth, state)
{
    auto mammoth = dp::Mammoth::create();
    ASSERT_NO_THROW(dynamic_cast<const dp::PeacefulState&>(mammoth->getState()));
    mammoth->timePasses();
    ASSERT_NO_THROW(dynamic_cast<const dp::AngryState&>(mammoth->getState()));
    mammoth->timePasses();
    ASSERT_NO_THROW(dynamic_cast<const dp::PeacefulState&>(mammoth->getState()));
}