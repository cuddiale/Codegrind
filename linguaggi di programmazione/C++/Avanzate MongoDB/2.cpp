// Creare una query che ordina i documenti in base a un campo specifico.

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <iostream>

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};
    auto collection = client["test_db"]["test_collection"];

    bsoncxx::builder::basic::document sort{};
    sort.append(bsoncxx::builder::basic::kvp("name", 1)); // 1 per ascendente, -1 per discendente

    auto cursor = collection.find({}, mongocxx::options::find{}.sort(sort.view()));

    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }

    return 0;
}