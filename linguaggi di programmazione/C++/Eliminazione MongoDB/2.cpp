// Stabilire una connessione a MongoDB ed eliminare più documenti.


#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <mongocxx/stdx.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <iostream>

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};
    auto collection = client["test_db"]["test_collection"];

    bsoncxx::builder::basic::document filter;
    filter.append(bsoncxx::builder::basic::kvp("status", "inactive"));

    auto result = collection.delete_many(filter.view());
    if (result) {
        std::cout << "Eliminati " << result->deleted_count() << " documenti." << std::endl;
    } else {
        std::cout << "Nessun documento eliminato." << std::endl;
    }

    return 0;
}