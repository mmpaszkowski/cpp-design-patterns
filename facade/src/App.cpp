//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include <utility>

#include "App.h"
#include "DwarvenGoldmineFacade.h"

using namespace dp;

void App::run() const
{
    DwarvenGoldmineFacade facade;
    facade.startNewDay();
    facade.digOutGold();
    facade.endDay();
}
