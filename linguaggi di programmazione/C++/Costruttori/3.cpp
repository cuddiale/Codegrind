// Creare una classe con un costruttore di copia e stampare i valori copiati.

#include <iostream>

class Esempio {
private:
    int x;
public:
    Esempio(int a) : x(a) {}
    Esempio(const Esempio& e) : x(e.x) {
        std::cout << "Costruttore di copia chiamato: x=" << x << std::endl;
    }
};

int main() {
    Esempio e1(10);
    Esempio e2 = e1;
    return 0;
}