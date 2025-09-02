//
// Created by Mateusz Paszkowski on 11.11.2024.
//

#include <utility>

#include "App.h"
#include "Mammoth.h"

void App::run() const 
{
    auto mammoth = dp::Mammoth::create();
    mammoth->observe();
    mammoth->timePasses();
    mammoth->observe();
    mammoth->timePasses();
    mammoth->observe();
}
