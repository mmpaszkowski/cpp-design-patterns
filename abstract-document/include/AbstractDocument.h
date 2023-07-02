//
// Created by noname on 01.07.23.
//

#ifndef CPP_DESIGN_PATTERNS_ABSTRACT_DOCUMENT_H
#define CPP_DESIGN_PATTERNS_ABSTRACT_DOCUMENT_H

#include "Document.h"

class AbstractDocument : public virtual Document{
public:
    AbstractDocument         () noexcept;
    explicit AbstractDocument(const std::map<std::string, std::any>& properties);
    AbstractDocument         (const AbstractDocument& other);
    AbstractDocument         (AbstractDocument&& other) noexcept;

    AbstractDocument& operator = (const AbstractDocument& abstractDocument);
    AbstractDocument& operator = (AbstractDocument&& abstractDocument) noexcept;

public:
    void                                                       put     (const std::string& key, const std::any& value) override;
    [[nodiscard]] std::any                                     get     (const std::string& key) const noexcept override;
    [[nodiscard]] std::vector<std::map<std::string, std::any>> children(const std::string& key) const noexcept override;

private:
    std::map<std::string, std::any> properties;
};

#endif //CPP_DESIGN_PATTERNS_ABSTRACT_DOCUMENT_H
