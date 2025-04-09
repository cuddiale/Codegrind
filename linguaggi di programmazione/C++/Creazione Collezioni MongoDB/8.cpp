// Creare una classe per gestire la connessione a MongoDB e creare una collezione con opzioni avanzate.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <mongocxx/options/create_collection.hpp>
#include <iostream>

class MongoDBClient {
private:
    mongocxx::instance inst{};
    mongocxx::client conn{mong

ocxx::uri{"mongodb://localhost:27017"}};
public:
    MongoDBClient() = default;

    void creaCollezioneConOpzioni(const std::string& db_name, const std::string& coll_name) {
        auto db = conn[db_name];

        mongocxx::options::create_collection options{};
        options.capped(true);
        options.size(1024 * 1024);

        db.create_collection(coll_name, options);
        std::cout << "Collezione creata con opzioni: " << coll_name << std::endl;
    }
};

int main() {
    MongoDBClient client;
    client.creaCollezioneConOpzioni("test_db", "collezione_con_opzioni");
    return 0;
}