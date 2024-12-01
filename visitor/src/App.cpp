//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "Commander.h"
#include "Sergeant.h"
#include "Soldier.h"
#include "SoldierVisitor.h"
#include "SergeantVisitor.h"
#include "CommanderVisitor.h"
#include <vector>
void App::run() const
{
    dp::Commander commander(std::initializer_list<std::shared_ptr<dp::Unit>>{
        std::make_shared<dp::Sergeant>(std::initializer_list<std::shared_ptr<dp::Unit>>{
            std::make_shared<dp::Soldier>(),
            std::make_shared<dp::Soldier>(),
            std::make_shared<dp::Soldier>()
        }),
        std::make_shared<dp::Sergeant>(std::initializer_list<std::shared_ptr<dp::Unit>>{
            std::make_shared<dp::Soldier>(),
            std::make_shared<dp::Soldier>(),
            std::make_shared<dp::Soldier>()
        })
    });

    commander.accept(dp::SoldierVisitor());
    commander.accept(dp::SergeantVisitor());
    commander.accept(dp::CommanderVisitor());
}
