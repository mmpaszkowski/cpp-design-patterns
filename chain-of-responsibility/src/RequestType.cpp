//
// Created by Mateusz Paszkowski on 23.04.2024.
//

#include "RequestType.h"

namespace dp
{
std::ostream& operator<<(std::ostream& os, const dp::RequestType request_type)
{
    switch (request_type)
    {
        case RequestType::DefendCastle: os << "DefendCastle"; break;
        case RequestType::TorturePrisoner: os << "TorturePrisoner"; break;
        case RequestType::CollectTax: os << "CollectTax"; break;
        default: throw std::runtime_error("Unsupported RequestType");
    }
    return os;
}

std::string toString(const dp::RequestType request_type)
{
    switch (request_type)
    {
        case RequestType::DefendCastle: return std::string{"DefendCastle"};
        case RequestType::TorturePrisoner: return std::string{"TorturePrisoner"};
        case RequestType::CollectTax: return std::string{"CollectTax"};
        default: throw std::runtime_error("Unsupported RequestType");
    }
}
} // namespace dp
