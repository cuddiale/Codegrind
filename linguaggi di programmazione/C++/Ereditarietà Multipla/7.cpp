// Creare due interfacce e una classe derivata che implementa entrambe.

#include <iostream>

class Interfaccia1 {
public:
    virtual void funzione1() = 0;
};

class Interfaccia2 {
public:
    virtual void funzione2() = 0;
};

class Derivata : public Interfaccia1, public Interfaccia2 {
public:
    void funzione1() override {
        std::cout << "Implementazione di funzione1" << std::endl;
    }
    void funzione2() override {
        std::cout << "Implementazione di funzione2" << std::endl;
    }
};

int main() {
    Derivata d;
    d.funzione1();
    d.funzione2();
    return 0;
}