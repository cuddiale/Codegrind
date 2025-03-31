// Creare una classe con un costruttore che utilizza valori di default per i parametri.

#include <iostream>

class Esempio {
private:
    int x;
    int y;
public:
    Esempio(int a = 0, int b = 0) : x(a), y(b) {
        std::cout << "Costruttore con valori di default chiamato: x=" << x << ", y=" << y << std::endl;
    }
};

int main() {
    Esempio e1;
    Esempio e2(10, 20);
    return 0;
}