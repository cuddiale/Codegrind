// Stabilire una connessione a MongoDB ed inserire più documenti.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <iostream>
#include <vector>

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};
    auto collection = client["test_db"]["test_collection"];

    bsoncxx::builder::basic::document document1{};
    document1.append(bsoncxx::builder::basic::kvp("name", "Alice"));
    document1.append(bsoncxx::builder::basic::kvp("age", 25));

    bsoncxx::builder::basic::document document2{};
    document2.append(bsoncxx::builder::basic::kvp("name", "Bob"));
    document2.append(bsoncxx::builder::basic::kvp("age", 28));

    std::vector<bsoncxx::document::value> documents;
    documents.push_back(document1.extract());
    documents.push_back(document2.extract());

    auto result = collection.insert_many(documents);
    if (result) {
        std::cout << "Documenti inseriti: " << result->inserted_count() << std::endl;
    }

    return 0;
}