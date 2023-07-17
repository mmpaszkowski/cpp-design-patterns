//
// Created by noname on 14.07.23.
//

#include "util/RandomProvider.h"

RandDouble::RandDouble()
        : distribution(0.0, 1.0), generator(std::mt19937(std::random_device()()))
{
}

double RandDouble::random() {
    return distribution(generator);
}

StaticRandomProvider::StaticRandomProvider(double value) : value(value) {

}

double StaticRandomProvider::random() {
    return value;
}
