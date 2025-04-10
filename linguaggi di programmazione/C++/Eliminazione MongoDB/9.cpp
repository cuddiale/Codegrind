// Stabilire una connessione a MongoDB ed eliminare un singolo documento usando Poco MongoDB.

#include <Poco/MongoDB/Client.h>
#include <Poco/MongoDB/Database.h>
#include <Poco/MongoDB/Collection.h>
#include <Poco/MongoDB/QueryRequest.h>
#include <iostream>

int main() {
    Poco::MongoDB::Client client("localhost", 27017);
    Poco::MongoDB::Database db("test_db");
    Poco::MongoDB::Collection collection(db, "test_collection");

    Poco::MongoDB::QueryRequest::Ptr query(new Poco::MongoDB::QueryRequest("test_db.test_collection"));
    query->selector().add("name", "John Doe");

    try {
        collection.remove(*query);
        std::cout << "Documento eliminato con successo." << std::endl;
    } catch (const Poco::Exception& e) {
        std::cerr << "Errore: " << e.displayText() << std::endl;
    }

    return 0;
}