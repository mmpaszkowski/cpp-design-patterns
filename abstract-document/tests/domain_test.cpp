//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include "Car.h"
#include <Part.h>
#include <enum/Property.h>
#include <gtest/gtest.h>

using namespace dp;
using std::string;

static const string TEST_PART_TYPE  = "test-part-type";
static const string TEST_PART_MODEL = "test-part-model";
static const long   TEST_PART_PRICE = 0L;

static const string TEST_CAR_MODEL  = "test-car-model";
static const long   TEST_CAR_PRICE  = 1L;


TEST(abstract_document, should_construct_part)
{
    auto partProperties = std::map<std::string, std::any>{{to_string(Property::TYPE), TEST_PART_TYPE},
                                                          {to_string(Property::MODEL), TEST_PART_MODEL},
                                                          {to_string(Property::PRICE), TEST_PART_PRICE}};

    auto part           = Part(partProperties);
    GTEST_ASSERT_EQ(TEST_PART_TYPE, part.getType().value());
    GTEST_ASSERT_EQ(TEST_PART_MODEL, part.getModel().value());
    GTEST_ASSERT_EQ(TEST_PART_PRICE, part.getPrice().value());
}

TEST(abstract_document, should_construct_car)
{
    auto carProperties = std::map<std::string, std::any>{
        {to_string(Property::MODEL), TEST_CAR_MODEL},
        {to_string(Property::PRICE), TEST_CAR_PRICE},
        {to_string(Property::PARTS), std::vector{std::map<string, std::any>(), std::map<string, std::any>()}}};

    auto car = Car(carProperties);
    GTEST_ASSERT_EQ(TEST_CAR_MODEL, car.getModel().value());
    GTEST_ASSERT_EQ(TEST_CAR_PRICE, car.getPrice().value());
    GTEST_ASSERT_EQ(2, car.getParts().size());
}
