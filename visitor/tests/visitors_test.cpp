//
// Created by Mateusz Paszkowski on 29.11.2024.
//

#include <Commander.h>
#include <Sergeant.h>
#include <Soldier.h>
#include <UnitVisitor.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using testing::An;

class MockVisitor : public dp::UnitVisitor
{
public:
    MOCK_METHOD(void, visit, (const dp::Soldier& soldier), (const, override));
    MOCK_METHOD(void, visit, (const dp::Sergeant& soldier), (const, override));
    MOCK_METHOD(void, visit, (const dp::Commander& soldier), (const, override));
};

TEST(visit, commander)
{
    auto          soldier1 = std::make_shared<dp::Soldier>();
    auto          soldier2 = std::make_shared<dp::Soldier>();
    auto          soldier3 = std::make_shared<dp::Soldier>();
    auto          soldier4 = std::make_shared<dp::Soldier>();
    auto          soldier5 = std::make_shared<dp::Soldier>();
    auto          soldier6 = std::make_shared<dp::Soldier>();
    auto          sergeant1 = std::make_shared<dp::Sergeant>(std::initializer_list<std::shared_ptr<dp::Unit>>{soldier1, soldier2, soldier3});
    auto          sergeant2 = std::make_shared<dp::Sergeant>(std::initializer_list<std::shared_ptr<dp::Unit>>{soldier4, soldier5, soldier6});
    auto          commander = std::make_shared<dp::Commander>(std::initializer_list<std::shared_ptr<dp::Unit>>{sergeant1, sergeant2});

    MockVisitor   mockVisitor;
    EXPECT_CALL(mockVisitor, visit(An<const dp::Soldier&>())).Times(6);
    EXPECT_CALL(mockVisitor, visit(An<const dp::Sergeant&>())).Times(2);
    EXPECT_CALL(mockVisitor, visit(An<const dp::Commander&>())).Times(1);
    commander->accept(mockVisitor);
}
