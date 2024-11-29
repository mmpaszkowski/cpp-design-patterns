//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#ifndef MAMMOTH_STATE_H
#define MAMMOTH_STATE_H

#include <memory>
#include <spdlog/spdlog.h>
#include <string>


namespace dp
{
class State;

class Mammoth : std::enable_shared_from_this<Mammoth>
{
protected:
    Mammoth();

public:
    [[nodiscard]] static std::shared_ptr<Mammoth> create();
    [[nodiscard]] std::string                     toString() const { return "The mammoth"; }
    const State&                                  getState() const { return *state; }
    void                                          timePasses();
    void                                          observe() const;

private:
    void changeStateTo(std::shared_ptr<State> newState);

private:
    std::shared_ptr<State> state;
};
} // namespace dp

#endif //MAMMOTH_STATE_H
