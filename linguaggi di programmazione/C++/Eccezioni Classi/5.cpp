// Creare una classe che gestisce un'eccezione in un metodo e rilancia l'eccezione.

#include <iostream>
#include <stdexcept>

class Esempio {
public:
    void metodo() {
        try {
            throw std::runtime_error("Errore nel metodo");
        } catch (const std::exception& e) {
            std::cerr << "Eccezione catturata nel metodo: " << e.what() << std::endl;
            throw; // Rilancia l'eccezione
        }
    }
};

int main() {
    Esempio e;
    try {
        e.metodo();
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}