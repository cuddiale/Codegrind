// Creare una classe che lancia un'eccezione nel costruttore.

#include <iostream>
#include <stdexcept>

class Esempio {
public:
    Esempio() {
        throw std::runtime_error("Errore nel costruttore");
    }
};

int main() {
    try {
        Esempio e;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}