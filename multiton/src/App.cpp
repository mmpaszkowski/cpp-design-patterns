//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "Nazgul.h"

void App::run() const
{
    std::cout << "Printing out eagerly initialized multiton contents\n";
    std::cout << "KHAMUL=" << Nazgul::getInstance(NazgulName::Khamul).getName() << std::endl;
    std::cout << "MURAZOR=" << Nazgul::getInstance(NazgulName::Murazor).getName() << std::endl;
    std::cout << "DWAR=" << Nazgul::getInstance(NazgulName::Dwar).getName() << std::endl;
    std::cout << "JI_INDUR=" << Nazgul::getInstance(NazgulName::JiIndur).getName() << std::endl;
    std::cout << "AKHORAHIL=" << Nazgul::getInstance(NazgulName::Akhorahil).getName() << std::endl;
    std::cout << "HOARMURATH=" << Nazgul::getInstance(NazgulName::Hoarmurath).getName() << std::endl;
    std::cout << "ADUNAPHEL=" << Nazgul::getInstance(NazgulName::Adunaphel).getName() << std::endl;
    std::cout << "REN=" << Nazgul::getInstance(NazgulName::Ren).getName() << std::endl;
    std::cout << "UVATHA=" << Nazgul::getInstance(NazgulName::Uvatha).getName() << std::endl;
}
