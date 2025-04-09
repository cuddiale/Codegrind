// Stabilire una connessione a MongoDB e leggere più documenti usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <bson/bson.h>
#include <iostream>

int main() {
    mongoc_init();

    mongoc_client_t *client = mongoc_client_new("mongodb://localhost:27017");
    mongoc_collection_t *collection = mongoc_client_get_collection(client, "test_db", "test_collection");

    bson_t *filter = BCON_NEW("status", BCON_UTF8("active"));
    mongoc_cursor_t *cursor = mongoc_collection_find_with_opts(collection, filter, nullptr, nullptr);

    const bson_t *doc;
    while (mongoc_cursor_next(cursor, &doc)) {
        char *str = bson_as_canonical_extended_json(doc, nullptr);
        std::cout << str << std::endl;
        bson_free(str);
    }

    bson_destroy(filter);
    mongoc_cursor_destroy(cursor);
    mongoc_collection_destroy(collection);
    mongoc_client_destroy(client);
    mongoc_cleanup();

    return 0;
}