// Creare una classe con un costruttore parametrizzato e stampare i valori passati.

#include <iostream>

class Esempio {
private:
    int x;
    int y;
public:
    Esempio(int a, int b) : x(a), y(b) {
        std::cout << "Costruttore parametrizzato chiamato: x=" << x << ", y=" << y << std::endl;
    }
};

int main() {
    Esempio e(10, 20);
    return 0;
}