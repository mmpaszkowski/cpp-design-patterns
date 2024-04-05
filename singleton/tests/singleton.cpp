//
// Created by noname on 4/5/24.
//

#include <gtest/gtest.h>
#include <SingletonFactory.h>

using namespace dp;

TEST(singleton, all_instances_should_be_same)
{
    // Create several instances in the same calling thread
    const auto& instance1 = SingletonFactory::getInstance();
    const auto& instance2 = SingletonFactory::getInstance();
    const auto& instance3 = SingletonFactory::getInstance();

    // now check they are the same
    ASSERT_EQ(&instance1, &instance2);
    ASSERT_EQ(&instance2, &instance3);
}

TEST(singleton, produced_object_should_be_equal)
{
    const auto& singletonFactory = SingletonFactory::getInstance();
    // now check produced objects equal
    ASSERT_EQ(singletonFactory.createElfWeapon(), singletonFactory.createElfWeapon());
    ASSERT_EQ(singletonFactory.createOrcWeapon(), singletonFactory.createOrcWeapon());
}
