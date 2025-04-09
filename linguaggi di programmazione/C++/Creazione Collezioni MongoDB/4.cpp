// Creare una classe per gestire la connessione a MongoDB e creare una collezione usando mongo-c-driver.

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

    void creaCollezione(const std::string& db_name, const std::string& coll_name) {
        mongoc_database_t *database = mongoc_client_get_database(client, db_name.c_str());
        bson_error_t error;
        if (mongoc_database_create_collection(database, coll_name.c_str(), nullptr, &error)) {
            std::cout << "Collezione creata: " << coll_name << std::endl;
        } else {
            std::cerr << "Errore nella creazione della collezione: " << error.message << std::endl;
        }
        mongoc_database_destroy(database);
    }
};

int main() {
    MongoDBClient client("mongodb://localhost:27017");
    client.creaCollezione("test_db", "nuova_collezione");
    return 0;
}