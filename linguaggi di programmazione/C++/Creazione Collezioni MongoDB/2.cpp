// Creare una classe per gestire la connessione a MongoDB e creare una collezione.

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

    void creaCollezione(const std::string& db_name, const std::string& coll_name) {
        auto db = conn[db_name];
        db.create_collection(coll_name);
        std::cout << "Collezione creata: " << coll_name << std::endl;
    }
};

int main() {
    MongoDBClient client;
    client.creaCollezione("test_db", "nuova_collezione");
    return 0;
}