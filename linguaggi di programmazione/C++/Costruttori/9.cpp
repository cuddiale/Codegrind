// Creare una classe con un costruttore che accetta parametri const.

#include <iostream>

class Esempio {
private:
    int x;
public:
    Esempio(const int a) : x(a) {
        std::cout << "Costruttore con parametro const chiamato: x=" << x << std::endl;
    }
};

int main() {
    const int val = 10;
    Esempio e(val);
    return 0;
}