// Stabilire una connessione a MongoDB e stampare il nome del database usando poco-mongo.

#include <Poco/MongoDB/Client.h>
#include <iostream>

int main() {
    Poco::MongoDB::Client client("localhost", 27017);
    auto db = client.connect("test_db");

    std::cout << "Connesso al database: test_db" << std::endl;

    return 0;
}