// Collegarsi a un database MongoDB e contare il numero di documenti in una collezione.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <iostream>

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};

    auto db = client["test_db"];
    auto collection = db["test_collection"];
    auto count = collection.count_documents({});

    std::cout << "Numero di documenti: " << count << std::endl;
    return 0;
}