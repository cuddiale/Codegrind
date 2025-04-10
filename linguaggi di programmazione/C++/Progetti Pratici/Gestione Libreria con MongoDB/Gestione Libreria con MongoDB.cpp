#include <iostream>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/stream/document.hpp>

using bsoncxx::builder::stream::document;
using bsoncxx::builder::stream::finalize;

void aggiungi_libro(mongocxx::collection& collection) {
    std::string titolo, autore;
    int anno;

    std::cout << "Inserisci il titolo del libro: ";
    std::getline(std::cin, titolo);
    std::cout << "Inserisci l'autore del libro: ";
    std::getline(std::cin, autore);
    std::cout << "Inserisci l'anno di pubblicazione: ";
    std::cin >> anno;
    std::cin.ignore();  // Ignores the newline character left in the input buffer

    document doc{};
    doc << "titolo" << titolo << "autore" << autore << "anno" << anno;

    collection.insert_one(doc.view());
    std::cout << "Libro aggiunto con successo!" << std::endl;
}

void visualizza_libri(mongocxx::collection& collection) {
    auto cursor = collection.find({});
    for (auto&& doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << std::endl;
    }
}

void modifica_libro(mongocxx::collection& collection) {
    std::string id, nuovo_titolo, nuovo_autore;
    int nuovo_anno;

    std::cout << "Inserisci l'ID del libro da modificare: ";
    std::getline(std::cin, id);
    std::cout << "Inserisci il nuovo titolo del libro: ";
    std::getline(std::cin, nuovo_titolo);
    std::cout << "Inserisci il nuovo autore del libro: ";
    std::getline(std::cin, nuovo_autore);
    std::cout << "Inserisci il nuovo anno di pubblicazione: ";
    std::cin >> nuovo_anno;
    std::cin.ignore();  // Ignores the newline character left in the input buffer

    bsoncxx::oid oid(id);
    document filter_doc{};
    filter_doc << "_id" << oid;

    document update_doc{};
    update_doc << "$set" << open_document << "titolo" << nuovo_titolo << "autore" << nuovo_autore << "anno" << nuovo_anno << close_document;

    collection.update_one(filter_doc.view(), update_doc.view());
    std::cout << "Libro modificato con successo!" << std::endl;
}

void cancella_libro(mongocxx::collection& collection) {
    std::string id;
    std::cout << "Inserisci l'ID del libro da cancellare: ";
    std::getline(std::cin, id);

    bsoncxx::oid oid(id);
    document doc{};
    doc << "_id" << oid;

    collection.delete_one(doc.view());
    std::cout << "Libro cancellato con successo!" << std::endl;
}

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{}};
    auto db = client["libreria"];
    auto collection = db["libri"];

    int scelta;

    do {
        std::cout << "\nGestione Libreria\n";
        std::cout << "1. Aggiungi Libro\n";
        std::cout << "2. Visualizza Libri\n";
        std::cout << "3. Modifica Libro\n";
        std::cout << "4. Cancella Libro\n";
        std::cout << "5. Esci\n";
        std::cout << "Scegli un'opzione: ";
        std::cin >> scelta;
        std::cin.ignore();  // Ignores the newline character left in the input buffer

        switch (scelta) {
            case 1:
                aggiungi_libro(collection);
                break;
            case 2:
                visualizza_libri(collection);
                break;
            case 3:
                modifica_libro(collection);
                break;
            case 4:
                cancella_libro(collection);
                break;
            case 5:
                std::cout << "Uscita..." << std::endl;
                break;
            default:
                std::cout << "Opzione non valida." << std::endl;
        }
    } while (scelta != 5);

    return 0;
}