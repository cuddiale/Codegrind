// Usare membri protetti nelle classi base e accedervi nella classe derivata.

#include <iostream>

class Base1 {
protected:
    int x;
public:
    Base1() : x(10) {}
};

class Base2 {
protected:
    int y;
public:
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