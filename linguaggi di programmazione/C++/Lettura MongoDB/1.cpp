// Stabilire una connessione a MongoDB e leggere un singolo documento.

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
    filter.append(bsoncxx::builder::basic::kvp("name", "John Doe"));

    auto result = collection.find_one(filter.view());
    if (result) {
        std::cout << bsoncxx::to_json(*result) << std::endl;
    } else {
        std::cout << "Documento non trovato" << std::endl;
    }

    return 0;
}