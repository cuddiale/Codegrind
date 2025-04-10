// Creare una pipeline di aggregazione per raggruppare i documenti e calcolare il valore medio di un campo.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <bsoncxx/builder/basic/array.hpp>
#include <iostream>

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};
    auto collection = client["test_db"]["test_collection"];

    using bsoncxx::builder::basic::kvp;
    using bsoncxx::builder::basic::make_document;
    using bsoncxx::builder::basic::make_array;

    auto pipeline = mongocxx::pipeline{};
    pipeline.group(make_document(kvp("_id", "$department"),
                                 kvp("averageAge", make_document(kvp("$avg", "$age")))));

    auto cursor = collection.aggregate(pipeline);

    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }

    return 0;
}