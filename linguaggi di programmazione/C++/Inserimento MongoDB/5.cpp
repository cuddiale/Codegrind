// Stabilire una connessione a MongoDB ed inserire un singolo documento usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <bson/bson.h>
#include <iostream>

int main() {
    mongoc_init();

    mongoc_client_t *client = mongoc_client_new("mongodb://localhost:27017");
    mongoc_collection_t *collection = mongoc_client_get_collection(client, "test_db", "test_collection");

    bson_t *document = BCON_NEW(
        "name", BCON_UTF8("John Doe"),
        "age", BCON_INT32(30)
    );

    bson_error_t error;
    if (!mongoc_collection_insert_one(collection, document, nullptr, nullptr, &error)) {
        std::cerr << "Errore nell'inserimento del documento: " << error.message << std::endl;
    } else {
        std::cout << "Documento inserito con successo." << std::endl;
    }

    bson_destroy(document);
    mongoc_collection_destroy(collection);
    mongoc_client_destroy(client);
    mongoc_cleanup();

    return 0;
}