//
// Created by Mateusz Paszkowski on 08.04.2024.
//

#include "Wizzard.h"
namespace dp
{
void Wizard::castSpell(const std::function<void()>& callable)
{
    callable();
    undo_stack_.push(callable);
}

void Wizard::undoLastSpell()
{
    if (!undo_stack_.empty())
    {
        auto previousSpell = undo_stack_.top();
        undo_stack_.pop();
        redo_stack_.push(previousSpell);
        previousSpell();
    }
}

void Wizard::redoLastSpell()
{
    if (!redo_stack_.empty())
    {
        auto previousSpell = redo_stack_.top();
        redo_stack_.pop();
        undo_stack_.push(previousSpell);
        previousSpell();
    }
}
} // namespace dp
