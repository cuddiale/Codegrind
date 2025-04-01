// Usare metodi virtuali nelle classi base e sovrascriverli nella classe derivata.

#include <iostream>

class Base1 {
public:
    virtual void funzione() {
        std::cout << "Funzione della Base1" << std::endl;
    }
};

class Base2 {
public:
    virtual void funzione() {
        std::cout << "Funzione della Base2" << std::endl;
    }
};

class Derivata : public Base1, public Base2 {
public:
    void funzione() override {
        std::cout << "Funzione della Derivata" << std::endl;
    }
};

int main() {
    Derivata d;
    d.funzione();
    return 0;
}