//
// Created by noname on 4/8/24.
//

#ifndef WIZZARD_H
#define WIZZARD_H

#include <functional>
#include <stack>


namespace dp
{
class Wizard
{
public:
    void castSpell(const std::function<void()>& callable);
    void undoLastSpell();
    void redoLastSpell();

private:
    std::stack<std::function<void()>> undo_stack_;
    std::stack<std::function<void()>> redo_stack_;
};
} // namespace dp

#endif //WIZZARD_H
