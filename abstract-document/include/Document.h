//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_DOCUMENT_H
#define CPP_DESIGN_PATTERNS_DOCUMENT_H

#include <any>
#include <map>
#include <string>
#include <vector>

namespace dp
{
class Document
{
public:
    virtual ~Document()                                                               = default;

    virtual void                   put(const std::string& key, const std::any& value) = 0;
    [[nodiscard]] virtual std::any get(const std::string& key) const noexcept         = 0;
    [[nodiscard]] virtual std::vector<std::map<std::string, std::any>> children(
        const std::string& key) const noexcept = 0;
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_DOCUMENT_H
