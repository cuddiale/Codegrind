// Creare una funzione che lancia un'eccezione quando non riesce ad aprire un file.

#include <iostream>
#include <fstream>
#include <stdexcept>

void apriFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Impossibile aprire il file");
    }
    std::cout << "File aperto con successo" << std::endl;
}

int main() {
    try {
        apriFile("esistente.txt");
        apriFile("non_esistente.txt");
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}