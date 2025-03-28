// Usare `std::vector` e `std::unique_ptr` per gestire dinamicamente un array di oggetti.

#include <iostream>
#include <vector>
#include <memory>

class Esempio {
public:
    Esempio(int val) : valore(val) {
        std::cout << "Costruttore chiamato per " << valore << std::endl;
    }
    ~Esempio() {
        std::cout << "Distruttore chiamato per " << valore << std::endl;
    }
    void stampa() {
        std::cout << "Valore: " << valore << std::endl;
    }
private:
    int valore;
};

int main() {
    std::vector<std::unique_ptr<Esempio>> v;
    for (int i = 0; i < 5; ++i) {
        v.push_back(std::make_unique<Esempio>(i));
    }
    for (auto& e : v) {
        e->stampa();
    }
    return 0;
}