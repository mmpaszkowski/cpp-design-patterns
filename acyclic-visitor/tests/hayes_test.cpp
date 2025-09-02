//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Hayes.h"
#include "ConfigureForDosVisitor.h"
#include "ConfigureForUnixVisitor.h"

using ::testing::_;

class MockConfigureForDosVisitor : public ConfigureForDosVisitor
{
public:
    MockConfigureForDosVisitor() = default;
public:
    MOCK_METHOD(void, visit, (Hayes &hayes), (override));
};

class MockConfigureForUnixVisitor : public ConfigureForUnixVisitor
{
public:
    MockConfigureForUnixVisitor() = default;
public:
    MOCK_METHOD(void, visit, (Zoom &zoom), (override));
};

TEST(acyclic_visitor, hayes_test_accept_for_dos)
{
    Hayes hayes;
    MockConfigureForDosVisitor visitor;
    EXPECT_CALL(visitor, visit(_)).Times(1);
    hayes.accept(visitor);
}

TEST(acyclic_visitor, hayes_test_accept_for_unix)
{
    Hayes hayes;
    MockConfigureForUnixVisitor visitor;
    EXPECT_CALL(visitor, visit(_)).Times(0);
    hayes.accept(visitor);
}

