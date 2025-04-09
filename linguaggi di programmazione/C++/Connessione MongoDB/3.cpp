// Stabilire una connessione a MongoDB e stampare il nome del database usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <iostream>

int main() {
    mongoc_init();

    mongoc_client_t *client = mongoc_client_new("mongodb://localhost:27017");
    mongoc_database_t *database = mongoc_client_get_database(client, "test_db");

    std::cout << "Connesso al database: " << mongoc_database_get_name(database) << std::endl;

    mongoc_database_destroy(database);
    mongoc_client_destroy(client);
    mongoc_cleanup();

    return 0;
}