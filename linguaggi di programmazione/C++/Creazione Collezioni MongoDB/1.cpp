// Stabilire una connessione a MongoDB e creare una collezione.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <iostream>

int main() {
    mongocxx::instance inst{};
    mongocxx::client conn{mongocxx::uri{"mongodb://localhost:27017"}};
    auto db = conn["test_db"];

    db.create_collection("nuova_collezione");
    std::cout << "Collezione creata: nuova_collezione" << std::endl;

    return 0;
}