// Creare una classe con un costruttore che utilizza una lista di inizializzazione.

#include <iostream>

class Esempio {
private:
    int x;
    int y;
public:
    Esempio(int a, int b) : x(a), y(b) {
        std::cout << "Costruttore con lista di inizializzazione chiamato: x=" << x << ", y=" << y << std::endl;
    }
};

int main() {
    Esempio e(10, 20);
    return 0;
}