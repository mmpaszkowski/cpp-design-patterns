//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include <iostream>
#include <memory>
#include <utility>

#include "App.h"
#include "ElfBeast.h"
#include "ElfMage.h"
#include "ElfWarlord.h"
#include "HeroFactoryImpl.h"
#include "OrcBeast.h"
#include "OrcMage.h"
#include "OrcWarlord.h"

using namespace dp;

void App::run() const
{
    HeroFactoryImpl orcFactory(std::make_unique<ElfMage>("cooking"),
                               std::make_unique<ElfWarlord>("cleaning"),
                               std::make_unique<ElfBeast>("protecting"));

    std::unique_ptr orcMage    = orcFactory.createMage();
    std::unique_ptr orcWarlord = orcFactory.createWarlord();
    std::unique_ptr orcBeast   = orcFactory.createBeast();

    std::cout << orcMage->toString() << std::endl;
    std::cout << orcWarlord->toString() << std::endl;
    std::cout << orcBeast->toString() << std::endl;

    HeroFactoryImpl elfFactory(std::make_unique<OrcMage>("axe"),
                               std::make_unique<OrcWarlord>("sword"),
                               std::make_unique<OrcBeast>("laser"));

    std::unique_ptr elfMage    = elfFactory.createMage();
    std::unique_ptr elfWarlord = elfFactory.createWarlord();
    std::unique_ptr elfBeast   = elfFactory.createBeast();

    std::cout << elfMage->toString() << std::endl;
    std::cout << elfWarlord->toString() << std::endl;
    std::cout << elfBeast->toString() << std::endl;
}
