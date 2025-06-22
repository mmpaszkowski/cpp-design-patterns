//
// Created by Mateusz Paszkowski on 22.06.2025.
//

#include "Captain.h"
#include <memory>

namespace dp
{
Captain::Captain(std::unique_ptr<RowingBoat> rowingBoat) : rowingBoat_(std::move(rowingBoat)) {}
void Captain::row() { rowingBoat_->row(); }

} // namespace dp
