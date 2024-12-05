//
// Created by Mateusz Paszkowski on 04.12.2024.
//

#include <ConsoleDrawer.h>
#include <DrawableShape.h>
#include <Shape.h>
#include <Rectangle.h>
#include <Circle.h>
#include <Square.h>
#include <Parallelogram.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using testing::An;

class MockConsoleDrawer : public dp::ConsoleDrawer
{
public:
    MOCK_METHOD(void, draw, (const dp::Shape& r), (const, override));
    MOCK_METHOD(void, draw, (const dp::Rectangle& r), (const, override));
    MOCK_METHOD(void, draw, (const dp::Circle& r), (const, override));
    MOCK_METHOD(void, draw, (const dp::Square& r), (const, override));
};

TEST(console_drawer, visiting)
{
    MockConsoleDrawer consoleDrawer;

    EXPECT_CALL(consoleDrawer, draw(An<const dp::Circle&>())).Times(1);
    EXPECT_CALL(consoleDrawer, draw(An<const dp::Square&>())).Times(1);
    EXPECT_CALL(consoleDrawer, draw(An<const dp::Rectangle&>())).Times(1);
    EXPECT_CALL(consoleDrawer, draw(An<const dp::Shape&>())).Times(1);

    dp::DrawableShape(dp::Circle(2.0), consoleDrawer).draw();
    dp::DrawableShape(dp::Square(1.5), consoleDrawer).draw();
    dp::DrawableShape(dp::Rectangle(2.0, 4.0), consoleDrawer).draw();
    dp::DrawableShape(dp::Parallelogram(2.0, 4.0), consoleDrawer).draw();
}
