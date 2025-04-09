// Stabilire una connessione a MongoDB e stampare il nome del database.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <iostream>

int main() {
    mongocxx::instance inst{};
    mongocxx::client conn{mongocxx::uri{"mongodb://localhost:27017"}};
    auto db = conn["test_db"];
    std::cout << "Connesso al database: " << db.name() << std::endl;
    return 0;
}