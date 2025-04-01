// Creare classi base con costruttori parametrizzati e una classe derivata che li inizializza.

#include <iostream>

class Base1 {
protected:
    int x;
public:
    Base1(int a) : x(a) {
        std::cout << "Costruttore della Base1" << std::endl;
    }
};

class Base2 {
protected:
    int y;
public:


 Base2(int b) : y(b) {
        std::cout << "Costruttore della Base2" << std::endl;
    }
};

class Derivata : public Base1, public Base2 {
public:
    Derivata(int a, int b) : Base1(a), Base2(b) {
        std::cout << "Costruttore della Derivata" << std::endl;
    }
    void stampa() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    Derivata d(10, 20);
    d.stampa();
    return 0;
}