// Creare una classe con un costruttore delegato.

#include <iostream>

class Esempio {
private:
    int x;
    int y;
public:
    Esempio() : Esempio(0, 0) {
        std::cout << "Costruttore di default delegato" << std::endl;
    }

    Esempio(int a, int b) : x(a), y(b) {
        std::cout << "Costruttore parametrizzato chiamato: x=" << x << ", y=" << y << std::endl;
    }
};

int main() {
    Esempio e1;
    Esempio e2(10, 20);
    return 0;
}