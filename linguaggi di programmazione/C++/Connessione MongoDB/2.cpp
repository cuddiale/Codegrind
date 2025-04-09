// Creare una classe per gestire la connessione a MongoDB e stampare il nome del database.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <iostream>

class MongoDBClient {
private:
    mongocxx::instance inst{};
    mongocxx::client conn{mongocxx::uri{"mongodb://localhost:27017"}};
public:
    MongoDBClient() = default;
    void stampaNomeDatabase(const std::string& db_name) {
        auto db = conn[db_name];
        std::cout << "Connesso al database: " << db.name() << std::endl;
    }
};

int main() {
    MongoDBClient client;
    client.stampaNomeDatabase("test_db");
    return 0;
}