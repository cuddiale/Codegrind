// Stabilire una connessione a MongoDB e modificare un singolo documento usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <bson/bson.h>
#include <iostream>

int main() {
    mongoc_init();

    mongoc_client_t *client = mongoc_client_new("mongodb://localhost:27017");
    mongoc_collection_t *collection = mongoc_client_get_collection(client, "test_db", "test_collection");

    bson_t *filter = BCON_NEW("name", BCON_UTF8("John Doe"));
    bson_t *update = BCON_NEW("$set", "{", "age", BCON_INT32(35), "}");

    bson_error_t error;
    if (!mongoc_collection_update_one(collection, filter, update, nullptr, nullptr, &error)) {
        std::cerr << "Errore nella modifica del documento: " << error.message << std::endl;
    } else {
        std::cout << "Documento modificato con successo" << std::endl;
    }

    bson_destroy(filter);
    bson_destroy(update);
    mongoc_collection_destroy(collection);
    mongoc_client_destroy(client);
    mongoc_cleanup();

    return 0;
}