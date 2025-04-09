// Creare una classe per gestire la connessione a MongoDB ed inserire un singolo documento usando mongo-c-driver.

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

    void inserisciDocumento(const std::string& db_name, const std::string& coll_name, const bson_t* document) {
        mongoc_collection_t *collection = mongoc_client_get_collection(client, db_name.c_str(), coll_name.c_str());
        bson_error_t error;
        if (!mongoc_collection_insert_one(collection, document, nullptr, nullptr, &error)) {
            std::cerr << "Errore nell'inserimento del documento: " << error.message << std::endl;
        } else {
            std::cout << "Documento inserito con successo." << std::endl;
        }
        mongoc_collection_destroy(collection);
    }
};

int main() {
    MongoDBClient client("mongodb://localhost:27017");

    bson_t *document = BCON_NEW(
        "name", BCON_UTF8("John Doe"),
        "age", BCON_INT32(30)
    );

    client.inserisciDocumento("test_db", "test_collection", document);

    bson_destroy(document);
    return 0;
}