//
// Created by Mateusz Paszkowski on 02.12.2024.
//

#ifndef CONSOLE_DRAWER_H
#define CONSOLE_DRAWER_H

#include <Shape.h>
#include <Rectangle.h>
#include <Circle.h>
#include <Square.h>
#include <numbers>
#include <iostream>
#include <spdlog/spdlog.h>

namespace dp
{
class ConsoleDrawer
{
public:
    virtual void draw(const Shape& r) const { spdlog::info("Drawed shape: area = " + std::to_string(r.getArea())); }
	virtual void draw(const Rectangle& r) const { spdlog::info("Drawed rectangle: width = " + std::to_string(r.getWidth()) + ", height = " + std::to_string(r.getHeight())); }
    virtual void draw(const Circle& c) const { spdlog::info("Drawed circle: radius = " + std::to_string(c.getRadius())); }
    virtual void draw(const Square& s) const { spdlog::info("Drawed square: side = " + std::to_string(s.getSide())); }
};

} // namespace dp

#endif //CONSOLE_DRAWER_H
