//
// Created by Mateusz Paszkowski on 02.12.2024.
//

#include <algorithm>
#include <vector>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "DrawableShape.h"
#include "ConsoleDrawer.h"
#include "App.h"


void App::run() const 
{
    std::vector<dp::DrawableShape> drawableShapes;

    drawableShapes.emplace_back(dp::Circle(2.0), dp::ConsoleDrawer());
    drawableShapes.emplace_back(dp::Square(1.5), dp::ConsoleDrawer());
    drawableShapes.emplace_back(dp::Rectangle(2.0, 4.0), dp::ConsoleDrawer());
    drawableShapes.emplace_back(dp::Parallelogram(2.0, 4.0), dp::ConsoleDrawer());

    std::ranges::for_each(drawableShapes, [](const auto& shape) { shape.draw(); });
}
