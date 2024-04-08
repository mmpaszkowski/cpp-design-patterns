//
// Created by noname on 02.07.23.
//
#include "App.h"
#include "Goblin.h"
#include "Wizzard.h"

using namespace dp;

void App::run() const
{
    Wizard wizard;
    Goblin goblin;

    goblin.printStatus();

    wizard.castSpell([&goblin] { goblin.changeSize(); });
    goblin.printStatus();

    wizard.castSpell([&goblin] { goblin.changeVisibility(); });
    goblin.printStatus();

    wizard.undoLastSpell();
    goblin.printStatus();

    wizard.undoLastSpell();
    goblin.printStatus();

    wizard.redoLastSpell();
    goblin.printStatus();

    wizard.redoLastSpell();
    goblin.printStatus();
}
