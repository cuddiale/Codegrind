// Creare una classe per gestire la connessione a MongoDB e creare una collezione usando Poco MongoDB.

#include <Poco/MongoDB/Client.h>
#include <Poco/MongoDB/Database.h>
#include <iostream>

class MongoDBClient {
private:
    Poco::MongoDB::Client client;
public:
    MongoDBClient(const std::string& host, int port) : client(host, port) {}

    void creaCollezione(const std::string& db_name, const std::string& coll_name) {
        Poco::MongoDB::Database db(db_name);
        db.createCollection(coll_name, client);
        std::cout << "Collezione creata: " << coll_name << std::endl;
    }
};

int main() {
    MongoDBClient client("localhost", 27017);
    client.creaCollezione("test_db", "nuova_collezione");
    return 0;
}