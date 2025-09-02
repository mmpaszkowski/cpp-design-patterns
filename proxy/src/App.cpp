//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include <utility>

#include "App.h"
#include "IvoryTower.h"
#include "WizardTowerProxy.h"

using namespace dp;

void App::run() const
{
    WizardTowerProxy proxy(std::make_unique<IvoryTower>());
    proxy.enter(std::make_unique<Wizard>("Red wizard"));
    proxy.enter(std::make_unique<Wizard>("White wizard"));
    proxy.enter(std::make_unique<Wizard>("Black wizard"));
    proxy.enter(std::make_unique<Wizard>("Green wizard"));
    proxy.enter(std::make_unique<Wizard>("Brown wizard"));
}
