//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include <utility>
#include <spdlog/spdlog.h>
#include "ActiveObject.h"

using spdlog::info;

ActiveObject::ActiveObject(const std::string &name) : name(name), requests(), queue_mutex(), t(), run(true) {
    auto runner = [this]() {
        while (run) {
            std::function<void()> runnable;
            {
                std::lock_guard<std::mutex> guard(queue_mutex);
                if (requests.empty()) continue;
                runnable = requests.front();
                requests.pop();
            }
            runnable();
        }
    };
    t = std::thread(runner);
}

ActiveObject::~ActiveObject() {
    run = false;
    t.join();
}

void ActiveObject::eat() {
    std::lock_guard<std::mutex> guard(queue_mutex);
    requests.emplace([this] {
        info("{} is eating!", get_name());
        info("{} has finished eating!", get_name());
    });
}

void ActiveObject::roam() {
    std::lock_guard<std::mutex> guard(queue_mutex);
    requests.emplace([this] {
        info("{} has started to roam the wastelands.", get_name());
    });
}

