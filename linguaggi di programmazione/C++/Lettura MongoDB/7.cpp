// Creare una classe per gestire la connessione a MongoDB e leggere un singolo documento usando mongo-c-driver.

#include <mongoc/mongoc.h>
#include <bson/bson.h>
#include <iostream>

class MongoDBClient {
private:
    mongoc_client_t *client;
public

:
    MongoDBClient(const std::string& uri) {
        mongoc_init();
        client = mongoc_client_new(uri.c_str());
    }

    ~MongoDBClient() {
        mongoc_client_destroy(client);
        mongoc_cleanup();
    }

    void leggiDocumento(const std::string& db_name, const std::string& coll_name, const bson_t* filter) {
        mongoc_collection_t *collection = mongoc_client_get_collection(client, db_name.c_str(), coll_name.c_str());
        mongoc_cursor_t *cursor = mongoc_collection_find_with_opts(collection, filter, nullptr, nullptr);

        const bson_t *doc;
        if (mongoc_cursor_next(cursor, &doc)) {
            char *str = bson_as_canonical_extended_json(doc, nullptr);
            std::cout << str << std::endl;
            bson_free(str);
        } else {
            std::cout << "Documento non trovato" << std::endl;
        }

        mongoc_cursor_destroy(cursor);
        mongoc_collection_destroy(collection);
    }
};

int main() {
    MongoDBClient client("mongodb://localhost:27017");

    bson_t *filter = BCON_NEW("name", BCON_UTF8("John Doe"));
    client.leggiDocumento("test_db", "test_collection", filter);
    bson_destroy(filter);

    return 0;
}