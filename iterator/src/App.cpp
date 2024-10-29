//
// Created by noname on 02.07.24.
//
#include <iostream>
#include <Nazgul.h>

#include "App.h"
#include <algorithm>

using namespace dp;

void App::run() const
{
    std::cout << "Printing out eagerly initialized multiton contents using Iterator\n";
    for(auto it = Nazgul::begin(); it != Nazgul::end(); it++)
    {
        std::string upper_name = toString(it->first);
        std::transform(upper_name.begin(), upper_name.end(), upper_name.begin(), ::toupper);
        std::cout << upper_name << "=" << it->second.getName() << std::endl;
    }
}
