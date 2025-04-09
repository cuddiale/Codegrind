// Stabilire una connessione a MongoDB e leggere più documenti.

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
    filter.append(bsoncxx::builder::basic::kvp("status", "active"));

    auto cursor = collection.find(filter.view());
    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }

    return 0;
}