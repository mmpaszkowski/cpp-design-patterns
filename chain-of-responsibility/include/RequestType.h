//
// Created by noname on 4/23/24.
//

#ifndef REQUEST_TYPE_H
#define REQUEST_TYPE_H

#include <ostream>
#include <string>

namespace dp
{
enum class RequestType
{
    DefendCastle,
    TorturePrisoner,
    CollectTax
};

[[nodiscard]] std::ostream& operator<<(std::ostream& os, RequestType request_type);

[[nodiscard]] std::string toString(RequestType request_type);

} // namespace dp

#endif //REQUEST_TYPE_H
