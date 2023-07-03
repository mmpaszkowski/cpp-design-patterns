//
// Created by noname on 02.07.23.
//
#include <utility>

#include "App.h"
#include "FishingBoatAdapter.h"
#include "Capitan.h"


void App::run() const {
    Captain captain(new FishingBoatAdapter());
    captain.row();
}
