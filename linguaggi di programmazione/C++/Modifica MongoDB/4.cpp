// Creare una classe per gestire la connessione a MongoDB e modificare più documenti.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <iostream>

class MongoDBClient {
private:
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};
public:
    MongoDBClient() = default;

    void modificaDocumenti(const std::string& db_name, const std::string& coll_name, const bsoncxx::document::view& filter, const bsoncxx::document::view& update) {
        auto collection = client[db_name][coll_name];
        auto result = collection.update_many(filter, update);
        if (result) {
            std::cout << "Documenti modificati: " << result->modified_count() << std::endl;
        } else {
            std::cout << "Nessun documento modificato" << std::endl;
        }
    }
};

int main() {
    MongoDBClient client;
    bsoncxx::builder::basic::document filter{};
    filter.append(bsoncxx::builder::basic::kvp("status", "active"));

    bsoncxx::builder::basic::document update{};
    update.append(bsoncxx::builder::basic::kvp("$set", bsoncxx::builder::basic::make_document(
        bsoncxx::builder::basic::kvp("status", "inactive")
    )));

    client.modificaDocumenti("test_db", "test_collection", filter.view(), update.view());
    return 0;
}