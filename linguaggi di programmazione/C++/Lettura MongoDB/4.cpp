// Creare una classe per gestire la connessione a MongoDB e leggere più documenti.

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

    void leggiDocumenti(const std::string& db_name, const std::string& coll_name, const bsoncxx::document::view& filter) {
        auto collection = client[db_name][coll_name];
        auto cursor = collection.find(filter);
        for (auto&& doc : cursor) {
            std::cout << bsoncxx::to_json(doc) << std::endl;
        }
    }
};

int main() {
    MongoDBClient client;
    bsoncxx::builder::basic::document filter{};
    filter.append(bsoncxx::builder::basic::kvp("status", "active"));
    client.leggiDocumenti("test_db", "test_collection", filter.view());
    return 0;
}