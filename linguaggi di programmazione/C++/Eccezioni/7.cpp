// Creare una funzione che lancia un'eccezione quando un file non è trovato.

#include <iostream>
#include <fstream>
#include <stdexcept>

void leggiFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("File non trovato");
    }
    std::cout << "File aperto con successo" << std::endl;
    file.close();
}

int main() {
    try {
        leggiFile("esistente.txt");
        leggiFile("non_esistente.txt");
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}