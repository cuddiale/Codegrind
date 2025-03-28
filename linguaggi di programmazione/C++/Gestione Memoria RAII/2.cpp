// Usare `std::shared_ptr` per gestire l'allocazione e deallocazione dinamica della memoria.

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
    std::shared_ptr<Esempio> ptr1 = std::make_shared<Esempio>();
    {
        std::shared_ptr<Esempio> ptr2 = ptr1;
        ptr2->stampa();
    }
    std::cout << "Fuori dal blocco" << std::endl;
    return 0;
}