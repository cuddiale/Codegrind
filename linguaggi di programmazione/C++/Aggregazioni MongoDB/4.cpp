// Utilizzare l'aggregazione per calcolare la media di un campo numerico.

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
    p.group(mongocxx::document{} << "_id" << bsoncxx::types::b_null{} << "average" << mongocxx::make_document(mongocxx::kvp("$avg", "$campo_numerico")) << mongocxx::finalize);

    auto cursor = collection.aggregate(p);
    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }

    return 0;
}