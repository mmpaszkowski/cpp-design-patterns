//
// Created by noname on 01.07.23.
//
#include <gtest/gtest.h>
#include <AbstractDocument.h>
#include <utility>

using std::map;
using std::vector;
using std::string;
using std::any;

class DocumentImplementation : public AbstractDocument {
public:
    static const string KEY;
    static const string VALUE;
    static const string NAME;

    explicit DocumentImplementation(map<string, any> properties)
            : AbstractDocument(std::move(properties)) {
    }
};

const string DocumentImplementation::KEY = "key";
const string DocumentImplementation::VALUE = "value";
const string DocumentImplementation::NAME = "DocumentImplementation";


TEST(abstract_document, should_put_and_get_value) {
    DocumentImplementation document = DocumentImplementation(map<string, any>());
    document.put(DocumentImplementation::KEY, DocumentImplementation::VALUE);
    GTEST_ASSERT_EQ(DocumentImplementation::VALUE, any_cast<string>(document.get(DocumentImplementation::KEY)));
}

TEST(abstract_document, verify_castle_creation) {
    DocumentImplementation document = DocumentImplementation(map<string, any>());

    auto children = vector{map<string, any>(), map<string, any>()};
    document.put(DocumentImplementation::KEY, children);
    auto childrenStream = document.children(DocumentImplementation::KEY);
    GTEST_ASSERT_EQ(2, childrenStream.size());
}

TEST(abstract_document, should_retrieve_empty_vector_for_non_existing_children) {
    DocumentImplementation document = DocumentImplementation(map<string, any>());
    auto children = document.children(DocumentImplementation::KEY);
    GTEST_ASSERT_EQ(0, children.size());
}
