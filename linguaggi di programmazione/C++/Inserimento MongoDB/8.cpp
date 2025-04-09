// Creare una classe per gestire la connessione a MongoDB ed inserire più documenti usando mongo-c-drive
#include <mongoc/mongoc.h>
#include <bson/bson.h>
#include <iostream>
#include <vector>

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

    void inserisciDocumenti(const std::string& db_name, const std::string& coll_name, const std::vector<bson_t*>& documents) {
        mongoc_collection_t *collection = mongoc_client_get_collection(client, db_name.c_str(), coll_name.c_str());
        bson_error_t error;
        if (!mongoc_collection_insert_many(collection, (const bson_t**)documents.data(), documents.size(), nullptr, nullptr, &error)) {
            std::cerr << "Errore nell'inserimento dei documenti: " << error.message << std::endl;
        } else {
            std::cout << "Documenti inseriti con successo." << std::endl;
        }
        mongoc_collection_destroy(collection);
    }
};

int main() {
    MongoDBClient client("mongodb://localhost:27017");

    bson_t *document1 = BCON_NEW(
        "name", BCON_UTF8("Alice"),
        "age", BCON_INT32(25)
    );

    bson_t *document2 = BCON_NEW(
        "name", BCON_UTF8("Bob"),
        "age", BCON_INT32(28)
    );

    std::vector<bson_t*> documents = {document1, document2};

    client.inserisciDocumenti("test_db", "test_collection", documents);

    bson_destroy(document1);
    bson_destroy(document2);
    return 0;
}