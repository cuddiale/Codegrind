// Creare classi base con membri dati e una classe derivata che accede a questi membri.

#include <iostream>

class Base1 {
public:
    int x;
    Base1() : x(10) {}
};

class Base2 {
public:
    int y;
    Base2() : y(20) {}
};

class Derivata : public Base1, public Base2 {
public:
    void stampa() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    Derivata d;
    d.stampa();
    return 0;
}