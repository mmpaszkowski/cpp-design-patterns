//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#ifndef CPP_DESIGN_PATTERNS_ABSTRACT_DOCUMENT_H
#define CPP_DESIGN_PATTERNS_ABSTRACT_DOCUMENT_H

#include "Document.h"

namespace dp
{
class AbstractDocument : public virtual Document
{
public:
    AbstractDocument() noexcept;
    explicit AbstractDocument(const std::map<std::string, std::any>& properties);
    AbstractDocument(const AbstractDocument& other);
    AbstractDocument(AbstractDocument&& other) noexcept;

    AbstractDocument&      operator=(const AbstractDocument& abstractDocument);
    AbstractDocument&      operator=(AbstractDocument&& abstractDocument) noexcept;

    void                   put(const std::string& key, const std::any& value) override;
    [[nodiscard]] std::any get(const std::string& key) const noexcept override;
    [[nodiscard]] std::vector<std::map<std::string, std::any>> children(const std::string& key) const noexcept override;

private:
    std::map<std::string, std::any> properties_{};
};
} // namespace dp

#endif //CPP_DESIGN_PATTERNS_ABSTRACT_DOCUMENT_H
