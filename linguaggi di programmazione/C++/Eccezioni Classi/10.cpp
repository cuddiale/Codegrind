// Creare una classe che lancia un'eccezione in una funzione di membro.

#include <iostream>
#include <stdexcept>

class Esempio {
public:
    void funzione(int val) {
        if (val == 0) {
            throw std::runtime_error("Valore non valido: zero");
        }
    }
};

int main() {
    Esempio e;
    try {
        e.funzione(0);
    } catch (const std::exception& ex) {
        std::cerr << "Errore: " << ex.what() << std::endl;
    }
    return 0;
}