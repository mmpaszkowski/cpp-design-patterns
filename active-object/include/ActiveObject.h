//
// Created by noname on 02.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_ACTIVE_OBJECT_H
#define CPP_DESIGN_PATTERNS_ACTIVE_OBJECT_H


#include <string>
#include <queue>
#include <functional>
#include <mutex>
#include <thread>

class ActiveObject {
public:
    explicit ActiveObject(const std::string &name);
    ActiveObject(const ActiveObject &other) = delete;
    ActiveObject(ActiveObject &&other) noexcept = default;
    ActiveObject &operator=(const ActiveObject &) = delete;
    ActiveObject &operator=(ActiveObject &&) noexcept = default;
    ~ActiveObject();

public:
    virtual void eat();
    virtual void roam();

    [[nodiscard]] virtual const std::string& get_name() const {
        return this->name;
    }

private:
    std::string name;
    std::queue<std::function<void()>> requests;
    std::mutex queue_mutex;
    std::thread t;
    std::atomic<bool> run;
};


#endif //CPP_DESIGN_PATTERNS_ACTIVE_OBJECT_H
