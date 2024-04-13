//
// Created by noname on 02.07.23.
//

#include <spdlog/spdlog.h>
#include "App.h"
#include "Messenger.h"

using namespace dp;

void App::run() const {

    Messenger messenger;

    spdlog::info("Message from the orcs: ");
    messenger.messageFromOrcs().print();

    spdlog::info("Message from the elves: ");
    messenger.messageFromElves().print();


}
