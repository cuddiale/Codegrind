// Creare una classe che lancia un'eccezione nel distruttore (e mostrare perché è sconsigliato).

#include <iostream>
#include <stdexcept>

class Esempio {
public:
    ~Esempio() {
        // Non lanciare eccezioni nel distruttore
        try {
            throw std::runtime_error("Errore nel distruttore");
        } catch (const std::exception& e) {
            std::cerr << "Eccezione nel distruttore catturata: " << e.what() << std::endl;
        }
    }
};

int main() {
    try {
        Esempio e;
        throw std::runtime_error("Eccezione esterna");
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}