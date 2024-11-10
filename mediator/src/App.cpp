//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "Party.h"
#include "Hobbit.h"
#include "Wizard.h"
#include "Rogue.h"
#include "Hunter.h"


void App::run() const 
{
    // create party and members
    std::shared_ptr<dp::Party>  party  = dp::Party::create();
    std::shared_ptr<dp::Hobbit> hobbit = dp::Hobbit::create();
    std::shared_ptr<dp::Wizard> wizard = dp::Wizard::create();
    std::shared_ptr<dp::Rogue>  rogue  = dp::Rogue::create();
    std::shared_ptr<dp::Hunter> hunter = dp::Hunter::create();

    // add party members
    party->addMember(hobbit);
    party->addMember(wizard);
    party->addMember(rogue);
    party->addMember(hunter);

    // perform actions -> the other party members
    // are notified by the party
    hobbit->act(dp::Action::Enemy);
    wizard->act(dp::Action::Tale);
    rogue->act(dp::Action::Gold);
    hunter->act(dp::Action::Hunt);
}
