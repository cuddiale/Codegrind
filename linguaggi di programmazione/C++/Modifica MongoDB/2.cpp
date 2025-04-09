// Stabilire una connessione a MongoDB e modificare più documenti.

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

    bsoncxx::builder::basic::document update{};
    update.append(bsoncxx::builder::basic::kvp("$set", bsoncxx::builder::basic::make_document(
        bsoncxx::builder::basic::kvp("status", "inactive")
    )));

    auto result = collection.update_many(filter.view(), update.view());
    if (result) {
        std::cout << "Documenti modificati: " << result->modified_count() << std::endl;
    } else {
        std::cout << "Nessun documento modificato" << std::endl;
    }

    return 0;
}