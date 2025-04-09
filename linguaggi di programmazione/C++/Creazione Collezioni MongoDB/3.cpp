// Stabilire una connessione a MongoDB e creare una collezione usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <iostream>

int main() {
    mongoc_init();

    mongoc_client_t *client = mongoc_client_new("mongodb://localhost:27017");
    mongoc_database_t *database = mongoc_client_get_database(client, "test_db");

    bson_error_t error;
    if (mongoc_database_create_collection(database, "nuova_collezione", nullptr, &error)) {
        std::cout << "Collezione creata: nuova_collezione" << std::endl;
    } else {
        std::cerr << "Errore nella creazione della collezione: " << error.message << std::endl;
    }

    mongoc_database_destroy(database);
    mongoc_client_destroy(client);
    mongoc_cleanup();

    return 0;
}