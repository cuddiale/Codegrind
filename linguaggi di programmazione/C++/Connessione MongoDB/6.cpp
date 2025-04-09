// Creare una classe per gestire la connessione a MongoDB e stampare il nome del database usando poco-mongo.

#include <Poco/MongoDB/Client.h>
#include <iostream>

class MongoDBClient {
private:
    Poco::MongoDB::Client client;
public:
    MongoDBClient(const std::string& host, int port) : client(host, port) {}

    void stampaNomeDatabase(const std::string& db_name) {
        auto db = client.connect(db_name);
        std::cout << "Connesso al database: " << db_name << std::endl;
    }
};

int main() {
    MongoDBClient client("localhost", 27017);
    client.stampaNomeDatabase("test_db");
    return 0;
}