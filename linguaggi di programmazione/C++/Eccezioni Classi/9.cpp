// Creare una classe che lancia un'eccezione durante la conversione di tipo.

#include <iostream>
#include <stdexcept>

class Esempio {
public:
    explicit Esempio(int val) {
        if (val < 0) {
            throw std::invalid_argument("Valore negativo non consentito");
        }
    }
};

int main() {
    try {
        Esempio e(-1);
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}