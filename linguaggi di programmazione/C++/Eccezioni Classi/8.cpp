// Creare una classe che lancia un'eccezione durante la copia di un oggetto.

#include <iostream>
#include <stdexcept>

class Esempio {
private:
    int* data;
public:
    Esempio() {
        data = new int[10];
    }
    Esempio(const Esempio& other) {
        if (!other.data) {
            throw std::runtime_error("Tentativo di copiare un oggetto non valido");
        }
        data = new int[10];
        std::copy(other.data, other.data + 10, data);
    }
    ~Esempio() {
        delete[] data;
    }
};

int main() {
    try {
        Esempio e1;
        Esempio e2 = e1;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}