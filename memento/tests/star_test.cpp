//
// Created by Mateusz Paszkowski on 08.04.2024.
//

#include <Star.h>
#include <gtest/gtest.h>

using namespace dp;

TEST(memento, test_time_passes)
{
    Star star(StarType::Sun, 1, 2);
    ASSERT_EQ("sun age: 1 years mass: 2 tons", star.toString());

    star.timePasses();
    ASSERT_EQ("red giant age: 2 years mass: 16 tons", star.toString());

    star.timePasses();
    ASSERT_EQ("white dwarf age: 4 years mass: 128 tons", star.toString());

    star.timePasses();
    ASSERT_EQ("supernova age: 8 years mass: 1024 tons", star.toString());

    star.timePasses();
    ASSERT_EQ("dead star age: 16 years mass: 8192 tons", star.toString());

    star.timePasses();
    ASSERT_EQ("dead star age: 64 years mass: 0 tons", star.toString());

    star.timePasses();
    ASSERT_EQ("dead star age: 256 years mass: 0 tons", star.toString());
}

TEST(memento, test_set_memento)
{
    Star star(StarType::Sun, 1, 2);

    auto firstMemento = star.getMemento();
    ASSERT_EQ("sun age: 1 years mass: 2 tons", star.toString());

    star.timePasses();
    auto secondMemento = star.getMemento();
    ASSERT_EQ("red giant age: 2 years mass: 16 tons", star.toString());

    star.timePasses();
    auto thirdMemento = star.getMemento();
    ASSERT_EQ("white dwarf age: 4 years mass: 128 tons", star.toString());

    star.timePasses();
    ASSERT_EQ("supernova age: 8 years mass: 1024 tons", star.toString());

    star.setMemento(*thirdMemento);
    ASSERT_EQ("white dwarf age: 4 years mass: 128 tons", star.toString());

    star.timePasses();
    ASSERT_EQ("supernova age: 8 years mass: 1024 tons", star.toString());

    star.setMemento(*secondMemento);
    ASSERT_EQ("red giant age: 2 years mass: 16 tons", star.toString());

    star.setMemento(*firstMemento);
    ASSERT_EQ("sun age: 1 years mass: 2 tons", star.toString());
}