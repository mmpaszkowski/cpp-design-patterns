//
// Created by noname on 02.07.23.
//
#include <utility>
#include <stack>
#include <spdlog/spdlog.h>

#include "StarMemento.h"
#include "Star.h"

#include "App.h"

void App::run() const 
{
    std::stack<std::unique_ptr<dp::StarMemento>> states;

    dp::Star star(dp::StarType::Sun, 10000000, 500000);
    spdlog::info(star.toString());
    states.push(star.getMemento());
    star.timePasses();

    spdlog::info(star.toString());
    states.push(star.getMemento());
    star.timePasses();
    spdlog::info(star.toString());
    states.push(star.getMemento());
    star.timePasses();
    spdlog::info(star.toString());
    states.push(star.getMemento());
    star.timePasses();
    spdlog::info(star.toString());
    while (!states.empty())
    {
        star.setMemento(*states.top());
        states.pop();
        spdlog::info(star.toString());
    }
}
