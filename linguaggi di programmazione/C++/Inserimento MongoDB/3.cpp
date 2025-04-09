// Creare una classe per gestire la connessione a MongoDB ed inserire un singolo documento.

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

    void inserisciDocumento(const std::string& db_name, const std::string& coll_name, const bsoncxx::document::view& document) {
        auto collection = client[db_name][coll_name];
        auto result = collection.insert_one(document);
        if (result) {
            std::cout << "Documento inserito con ID: " << result->inserted_id().get_oid().value.to_string() << std::endl;
        }
    }
};

int main() {
    MongoDBClient client;
    bsoncxx::builder::basic::document document{};
    document.append(bsoncxx::builder::basic::kvp("name", "John Doe"));
    document.append(bsoncxx::builder::basic::kvp("age", 30));
    client.inserisciDocumento("test_db", "test_collection", document.view());
    return 0;
}