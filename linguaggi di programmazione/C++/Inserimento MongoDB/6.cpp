// Stabilire una connessione a MongoDB ed inserire più documenti usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <bson/bson.h>
#include <iostream>
#include <vector>

int main() {
    mongoc_init();

    mongoc_client_t *client = mongoc_client_new("mongodb

://localhost:27017");
    mongoc_collection_t *collection = mongoc_client_get_collection(client, "test_db", "test_collection");

    bson_t *document1 = BCON_NEW(
        "name", BCON_UTF8("Alice"),
        "age", BCON_INT32(25)
    );

    bson_t *document2 = BCON_NEW(
        "name", BCON_UTF8("Bob"),
        "age", BCON_INT32(28)
    );

    std::vector<bson_t*> documents = {document1, document2};

    bson_error_t error;
    if (!mongoc_collection_insert_many(collection, (const bson_t**)documents.data(), documents.size(), nullptr, nullptr, &error)) {
        std::cerr << "Errore nell'inserimento dei documenti: " << error.message << std::endl;
    } else {
        std::cout << "Documenti inseriti con successo." << std::endl;
    }

    bson_destroy(document1);
    bson_destroy(document2);
    mongoc_collection_destroy(collection);
    mongoc_client_destroy(client);
    mongoc_cleanup();

    return 0;
}