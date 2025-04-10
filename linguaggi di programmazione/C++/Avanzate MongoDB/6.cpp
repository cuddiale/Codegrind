// Creare una query che utilizza condizioni multiple (AND, OR) per filtrare i documenti.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <iostream>

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};
    auto collection = client["test_db"]["test_collection"];

    bsoncxx::builder::basic::document filter{};
    filter.append(bsoncxx::builder::basic::kvp("$and", bsoncxx::builder::basic::make_array(
        bsoncxx::builder::basic::make_document(bsoncxx::builder::basic::kvp("age", bsoncxx::builder::basic::make_document(bsoncxx::builder::basic::kvp("$gte", 25)))),
        bsoncxx::builder::basic::make_document(bsoncxx::builder::basic::kvp("status", "active"))
    )));

    auto cursor = collection.find(filter.view());

    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }

    return 0;
}