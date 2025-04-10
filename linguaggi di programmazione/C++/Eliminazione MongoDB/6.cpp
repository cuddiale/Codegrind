// Stabilire una connessione a MongoDB ed eliminare più documenti usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <bson/bson.h>
#include <iostream>

int main() {
    mongoc_init();

    mongoc_client_t *client = mongoc_client_new("mongodb://localhost:27017");
    mongoc_collection_t *collection = mongoc_client_get_collection(client, "test_db", "test_collection");

    bson_t *filter = BCON_NEW("status", BCON_UTF8("inactive"));
    bson_error_t error;

    if (mongoc_collection_delete_many(collection, filter, nullptr, nullptr, &error)) {
        std::cout << "Documenti eliminati con successo." << std::endl;
    } else {
        std::cerr << "Errore nell'eliminazione dei documenti: " << error.message << std::endl;
    }

    bson_destroy(filter);
    mongoc_collection_destroy(collection);
    mongoc_client_destroy(client);
    mongoc_cleanup();

    return 0;
}