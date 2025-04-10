// Utilizzare l'aggregazione per contare il numero di documenti in base a un campo specifico.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <mongocxx/pipeline.hpp>
#include <iostream>

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};

    auto db = client["test_db"];
    auto collection = db["test_collection"];

    mongocxx::pipeline p{};
    p.group(mongocxx::document{} << "_id" << "$campo" << "count" << mongocxx::make_document(mongocxx::kvp("$sum", 1)) << mongocxx::finalize);

    auto cursor = collection.aggregate(p);
    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }

    return 0;
}