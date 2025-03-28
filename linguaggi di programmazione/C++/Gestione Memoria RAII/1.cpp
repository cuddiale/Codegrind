// Usare `std::unique_ptr` per gestire l'allocazione e deallocazione dinamica della memoria.

#include <iostream>
#include <memory>

class Esempio {
public:
    Esempio() {
        std::cout << "Costruttore chiamato" << std::endl;
    }
    ~Esempio() {
        std::cout << "Distruttore chiamato" << std::endl;
    }
    void stampa() {
        std::cout << "Funzione stampa chiamata" << std::endl;
    }
};

int main() {
    std::unique_ptr<Esempio> ptr = std::make_unique<Esempio>();
    ptr->stampa();
    return 0;
}