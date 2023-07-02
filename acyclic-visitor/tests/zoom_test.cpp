//
// Created by noname on 01.07.23.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Zoom.h"
#include "ConfigureForDosVisitor.h"
#include "ConfigureForUnixVisitor.h"

using ::testing::_;

class MockConfigureForUnixVisitor : public ConfigureForUnixVisitor
{
public:
    MockConfigureForUnixVisitor() = default;
public:
    MOCK_METHOD(void, visit, (Zoom &zoom), (override));
};

class MockConfigureForDosVisitor : public ConfigureForDosVisitor
{
public:
    MockConfigureForDosVisitor() = default;
public:
    MOCK_METHOD(void, visit, (Hayes &hayes), (override));
};

TEST(acyclic_visitor, zoom_test_accept_for_unix)
{
    Zoom zoom;
    MockConfigureForUnixVisitor visitor;
    EXPECT_CALL(visitor, visit(_)).Times(1);
    zoom.accept(visitor);
}

TEST(acyclic_visitor, zoom_test_accept_for_dos)
{
    Zoom zoom;
    MockConfigureForDosVisitor visitor;
    EXPECT_CALL(visitor, visit(_)).Times(0);
    zoom.accept(visitor);
}


