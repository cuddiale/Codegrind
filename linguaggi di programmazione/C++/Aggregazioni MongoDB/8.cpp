// Utilizzare l'aggregazione per filtrare i documenti in base a un criterio specifico.

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
    p.match(mongocxx::document{} << "campo" << bson

cxx::types::bson_value::view(bsoncxx::types::b_int32{10}) << mongocxx::finalize);

    auto cursor = collection.aggregate(p);
    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }

    return 0;
}