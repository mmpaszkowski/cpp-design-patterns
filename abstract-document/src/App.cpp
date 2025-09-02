//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include "../include/App.h"
#include "../include/Car.h"
#include "../include/enum/Property.h"
#include <spdlog/spdlog.h>

using spdlog::info;

namespace dp
{
void App::run()
{
    auto wheelProperties = std::map<std::string, std::any>{{to_string(Property::TYPE), std::string("wheel")},
                                                           {to_string(Property::MODEL), std::string("15C")},
                                                           {to_string(Property::PRICE), 100L}};

    auto doorProperties  = std::map<std::string, std::any>{{to_string(Property::TYPE), std::string("door")},
                                                           {to_string(Property::MODEL), std::string("Lambo")},
                                                           {to_string(Property::PRICE), 300L}};

    auto carProperties =
        std::map<std::string, std::any>{{to_string(Property::MODEL), std::string("300SL")},
                                        {to_string(Property::PRICE), 10000L},
                                        {to_string(Property::PARTS), std::vector{wheelProperties, doorProperties}}};

    Car car(carProperties);
    info("Here is our car:");
    info("-> model: {}", car.getModel().value());
    info("-> price: {}", car.getPrice().value());
    info("-> parts: ");
    for (auto&& part : car.getParts())
    {
        info("\t-> {}/{}/{}", part.getType().value(), part.getModel().value(), part.getPrice().value());
    }
}
} // namespace dp
