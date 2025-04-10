// Creare una query che filtra i documenti in base a un campo specifico e proietta solo determinati campi.


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

    bsoncxx::builder::basic::document filter{};
    filter.append(bsoncxx::builder::basic::kvp("age", bsoncxx::builder::basic::make_document(
        bsoncxx::builder::basic::kvp("$gte", 30)
    )));

    bsoncxx::builder::basic::document projection{};
    projection.append(bsoncxx::builder::basic::kvp("name", 1),
                      bsoncxx::builder::basic::kvp("_id", 0));

    auto cursor = collection.find(filter.view(), mongocxx::options::find{}.projection(projection.view()));

    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }

    return 0;
}