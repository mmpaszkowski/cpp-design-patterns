//
// Created by noname on 6/29/24.
//

#ifndef ACTION_H
#define ACTION_H

#include <iostream>

namespace dp
{
    using std::literals::string_literals::operator""s;

    enum class Action
    {
        Hunt,
        Tale,
        Gold,
        Enemy,
        None,
    };

    constexpr std::ostream& operator<<(std::ostream& os, const Action action)
    {
        switch (action)
        {
            case Action::Hunt: os << "Hunt"; break;
            case Action::Tale: os << "Tale"; break;
            case Action::Gold: os << "Gold"; break;
            case Action::Enemy: os << "Enemy"; break;
            case Action::None: os << "None"; break;
            default: throw std::runtime_error("Unexpected Action enum value");
        }
        return os;
    }

    [[nodiscard]] constexpr std::string toString(const Action action)
    {
        switch (action)
        {
            case Action::Hunt: return "Hunt"s;
            case Action::Tale: return "Tale"s;
            case Action::Gold: return "Gold"s;
            case Action::Enemy: return "Enemy"s;
            case Action::None: return "None"s;
            default: throw std::runtime_error("Unexpected Action enum value");
        }
    }

    [[nodiscard]] constexpr std::string getTitle(const Action action)
    {
        switch (action)
        {
            case Action::Hunt: return "hunted a rabbit"s;
            case Action::Tale: return "tells a tale"s;
            case Action::Gold: return "found gold"s;
            case Action::Enemy: return "spotted enemies"s;
            case Action::None: return ""s;
            default: throw std::runtime_error("Unexpected Action enum value");
        }
    }

    [[nodiscard]] constexpr std::string getDescription(const Action action)
    {
        switch (action)
        {
            case Action::Hunt: return "arrives for dinner"s;
            case Action::Tale: return "comes to listen"s;
            case Action::Gold: return "takes his share of the gold"s;
            case Action::Enemy: return "runs for cover"s;
            case Action::None: return ""s;
            default: throw std::runtime_error("Unexpected Action enum value");
        }
    }
} // namespace dp


#endif //ACTION_H
