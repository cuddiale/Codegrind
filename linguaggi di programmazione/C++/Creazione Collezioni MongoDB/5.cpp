// Stabilire una connessione a MongoDB e creare una collezione usando Poco MongoDB.

#include <Poco/MongoDB/Client.h>
#include <Poco/MongoDB/Database.h>
#include <iostream>

int main() {
    Poco::MongoDB::Client client("localhost", 27017);
    Poco::MongoDB::Database db("test_db");

    db.createCollection("nuova_collezione", client);
    std::cout << "Collezione creata: nuova_collezione" << std::endl;

    return 0;
}