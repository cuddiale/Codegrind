// Stabilire una connessione a MongoDB e creare una collezione con opzioni avanzate.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <mongocxx/options/create_collection.hpp>
#include <iostream>

int main() {
    mongocxx::instance inst{};
    mongocxx::client conn{mongocxx::uri{"mongodb://localhost:27017"}};
    auto db = conn["test_db"];

    mongocxx::options::create_collection options{};
    options.capped(true);
    options.size(1024 * 1024);

    db.create_collection("collezione_con_opzioni", options);
    std::cout << "Collezione creata con opzioni: collezione_con_opzioni" << std::endl;

    return 0;
}