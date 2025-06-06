// Creare una classe per gestire
// la connessione a MongoDB ed eliminare un singolo documento usando mongo-c-driver.

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

    void eliminaDocumentoSingolo(const std::string& db_name, const std::string& coll_name, const bson_t* filter) {
        mongoc_collection_t *collection = mongoc_client_get_collection(client, db_name.c_str(), coll_name.c_str());
        bson_error_t error;
        if (mongoc_collection_delete_one(collection, filter, nullptr, nullptr, &error)) {
            std::cout << "Documento eliminato con successo." << std::endl;
        } else {
            std::cerr << "Errore nell'eliminazione del documento: " << error.message << std::endl;
        }
        mongoc_collection_destroy(collection);
    }
};

int main() {
    MongoDBClient client("mongodb://localhost:27017");
    bson_t *filter = BCON_NEW("name", BCON_UTF8("John Doe"));
    client.eliminaDocumentoSingolo("test_db", "test_collection", filter);
    bson_destroy(filter);
    return 0;
}
