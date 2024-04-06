//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "LoadBalancer.h"

using namespace dp;

void App::run() const
{
    LoadBalancer firstBalancer;
    LoadBalancer secondBalancer;
    firstBalancer.serverRequest(Request("Hello"));
    secondBalancer.serverRequest(Request("Hello World"));
}
