//
// Created by Mateusz Paszkowski on 02.07.2023.
//

#ifndef APP_H
#define APP_H

#include <string>

class App
{
public:
    void run() const;

private:
    const static std::string red_dragon_emerges;
    const static std::string green_dragon_spotted;
    const static std::string black_dragon_lands;
};

#endif //APP_H
