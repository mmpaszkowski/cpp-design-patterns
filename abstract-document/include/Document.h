//
// Created by Mateusz Paszkowski on 01.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_DOCUMENT_H
#define CPP_DESIGN_PATTERNS_DOCUMENT_H

#include <any>
#include <map>
#include <string>
#include <vector>

class Document {
public:
    virtual void                                                       put     (const std::string& key, const std::any& value) = 0;
    [[nodiscard]] virtual std::any                                     get     (const std::string& key) const noexcept = 0;
    [[nodiscard]] virtual std::vector<std::map<std::string, std::any>> children(const std::string& key) const noexcept = 0;
};

#endif //CPP_DESIGN_PATTERNS_DOCUMENT_H


