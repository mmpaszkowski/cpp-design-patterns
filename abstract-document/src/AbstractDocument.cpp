//
// Created by noname on 02.07.23.
//
#include "AbstractDocument.h"

AbstractDocument::AbstractDocument() noexcept = default;

AbstractDocument::AbstractDocument(const std::map<std::string, std::any> &properties) :
        properties(properties) {

}

AbstractDocument::AbstractDocument(const AbstractDocument &other) = default;

AbstractDocument::AbstractDocument(AbstractDocument &&other) noexcept = default;

AbstractDocument &AbstractDocument::operator=(const AbstractDocument &abstractDocument) = default;

AbstractDocument &AbstractDocument::operator=(AbstractDocument &&abstractDocument) noexcept = default;

void AbstractDocument::put(const std::string& key, const std::any& value) {
    properties.emplace(key, value);
}

std::any AbstractDocument::get(const std::string &key) const noexcept {
    if (properties.contains(key))
        return properties.at(key);
    return std::vector<std::map<std::string, std::any>>();
}

std::vector<std::map<std::string, std::any>> AbstractDocument::children(const std::string &key) const noexcept {
    return std::any_cast<std::vector<std::map<std::string, std::any>>>(get(key));
}
