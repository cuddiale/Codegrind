// Stabilire una connessione a MongoDB ed inserire un singolo documento.

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

    bsoncxx::builder::basic::document document{};
    document.append(bsoncxx::builder::basic::kvp("name", "John Doe"));
    document.append(bsoncxx::builder::basic::kvp("age", 30));

    auto result = collection.insert_one(document.view());
    if (result) {
        std::cout << "Documento inserito con ID: " << result->inserted_id().get_oid().value.to_string() << std::endl;
    }

    return 0;
}