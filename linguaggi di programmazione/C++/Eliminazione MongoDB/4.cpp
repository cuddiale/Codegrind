// Creare una classe per gestire la connessione a MongoDB ed eliminare più documenti.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <mongocxx/stdx.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <iostream>

class MongoDBClient {
private:
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};
public:
    MongoDBClient() = default;

    void eliminaDocumentiMultipli(const std::string& db_name, const std::string& coll_name, const bsoncxx::document::view& filter) {
        auto collection = client[db_name][coll_name];
        auto result = collection.delete_many(filter);
        if (result) {
            std::cout << "Eliminati " << result->deleted_count() << " documenti." << std::endl;
        } else {
            std::cout << "Nessun documento eliminato." << std::endl;
        }
    }
};

int main() {
    MongoDBClient client;
    bsoncxx::builder::basic::document filter;
    filter.append(bsoncxx::builder::basic::kvp("status", "inactive"));
    client.eliminaDocumentiMultipli("test_db", "test_collection", filter.view());
    return 0;
}