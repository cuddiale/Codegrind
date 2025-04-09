// Creare una classe per gestire la connessione a MongoDB e
// // modificare più documenti usando mongo-c-driver.


#include <mongoc/mongoc.h>
#include <bson/bson.h>
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

    void modificaDocumenti(const std::string& db_name, const std::string& coll_name, const bson_t* filter, const bson_t* update) {
        mongoc_collection_t *collection = mongoc_client_get_collection(client, db_name.c_str(), coll_name.c_str());
        bson_error_t error;
        if (!mongoc_collection_update_many(collection, filter, update, nullptr, nullptr, &error)) {
            std::cerr << "Errore nella modifica dei documenti: " << error.message << std::endl;
        } else {
            std::cout << "Documenti modificati con successo" << std::endl;
        }
        mongoc_collection_destroy(collection);
    }
};

int main() {
    MongoDBClient client("mongodb://localhost:27017");

    bson_t *filter = BCON_NEW("status", BCON_UTF8("active"));
    bson_t *update = BCON_NEW("$set", "{", "status", BCON_UTF8("inactive"), "}");

    client.modificaDocumenti("test_db", "test_collection", filter, update);

    bson_destroy(filter);
    bson_destroy(update);

    return 0;
}