//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#include "App.h"
#include "Captain.h"
#include "FishingBoatAdapter.h"

namespace dp
{
void App::run() const
{
    Captain captain(std::make_unique<FishingBoatAdapter>());
    captain.row();
}
} // namespace dp
