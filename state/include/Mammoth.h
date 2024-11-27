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
    void                                          timePasses();
    void                                          observe() const;
    [[nodiscard]] std::string                     toString() const { return "The mammoth"; }

private:
    void changeStateTo(std::shared_ptr<State> newState) const;

private:
    std::shared_ptr<State> state;
};
} // namespace dp

#endif //MAMMOTH_STATE_H
