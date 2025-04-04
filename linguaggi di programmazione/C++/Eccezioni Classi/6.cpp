// Creare una classe che lancia un'eccezione nella gestione della memoria dinamica.

#include <iostream>
#include <stdexcept>

class Esempio {
private:
    int* data;
public:
    Esempio() {
        data = new int[10];
        if (!data) {
            throw std::runtime_error("Allocazione di memoria fallita");
        }
    }
    ~Esempio() {
        delete[] data;
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