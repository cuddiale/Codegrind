// Creare una classe per gestire la connessione a MongoDB ed eliminare più documenti usando Poco MongoDB.

#include <Poco/MongoDB/Client.h>
#include <Poco/MongoDB/Database.h>
#include <Poco/MongoDB/Collection.h>
#include <Poco/MongoDB/QueryRequest.h>
#include <iostream>

class MongoDBClient {
private:
    Poco::MongoDB::Client client;
public:
    MongoDBClient(const std::string& host, int port) : client(host, port) {}

    void eliminaDocumentiMultipli(const std::string& db_name, const std::string& coll_name, const Poco::MongoDB::Document::Ptr& filter) {
        Poco::MongoDB::Database db(db_name);
        Poco::MongoDB::Collection collection(db, coll_name);

        Poco::MongoDB::QueryRequest::Ptr query(new Poco::MongoDB::QueryRequest(db_name + "." + coll_name));
        query->selector().add(filter);

        try {
            collection.remove(*query);
            std::cout << "Documenti eliminati con successo." << std::endl;
        } catch (const Poco::Exception& e) {
            std::cerr << "Errore: " << e.displayText() << std::endl;
        }
    }
};

int main() {
    MongoDBClient client("localhost", 27017);
    Poco::MongoDB::Document::Ptr filter(new Poco::MongoDB::Document);
    filter->add("status", "inactive");
    client.eliminaDocumentiMultipli("test_db", "test_collection", filter);
    return 0;
}