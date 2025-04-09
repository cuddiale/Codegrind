// Creare una classe per gestire la connessione a MongoDB e stampare il nome del database usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <iostream>

class MongoDBClient {
private:
    mongoc_client_t *client;
public:
    MongoDBClient(const std::string& uri) {
        mongoc_init();
        client = mongoc_client_new(uri.c_str());
    }

    ~MongoDBClient() {
        mongoc_client_destroy(client);
        mongoc_cleanup();
    }

    void stampaNomeDatabase(const std::string& db_name) {
        mongoc_database_t *database = mongoc_client_get_database(client, db_name.c_str());
        std::cout << "Connesso al database: " << mongoc_database_get_name(database) << std::endl;
        mongoc_database_destroy(database);
    }
};

int main() {
    MongoDBClient client("mongodb://localhost:27017");
    client.stampaNomeDatabase("test_db");
    return 0;
}