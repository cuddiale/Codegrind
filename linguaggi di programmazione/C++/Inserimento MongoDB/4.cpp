// Creare una classe per gestire la connessione a MongoDB ed inserire più documenti.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <iostream>
#include <vector>

class MongoDBClient {
private:
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};
public:
    MongoDBClient() = default;

    void inserisciDocumenti(const std::string& db_name, const std::string& coll_name, const std::vector<bsoncxx::document::value>& documents) {
        auto collection = client[db_name][coll_name];
        auto result = collection.insert_many(documents);
        if (result) {
            std::cout << "Documenti inseriti: " << result->inserted_count() << std::endl;
        }
    }
};

int main() {
    MongoDBClient client;

    bsoncxx::builder::basic::document document1{};
    document1.append(bsoncxx::builder::basic::kvp("name", "Alice"));
    document1.append(bsoncxx::builder::basic::kvp("age", 25));

    bsoncxx::builder::basic::document document2{};
    document2.append(bsoncxx::builder::basic::kvp("name", "Bob"));
    document2.append(bsoncxx::builder::basic::kvp("age", 28));

    std::vector<bsoncxx::document::value> documents;
    documents.push_back(document1.extract());
    documents.push_back(document2.extract());

    client.inserisciDocumenti("test_db", "test_collection", documents);
    return 0;
}