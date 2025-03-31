// Creare una classe base con un distruttore virtuale e una classe derivata.

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Costruttore Base chiamato" << std::endl;
    }
    virtual ~Base() {
        std::cout << "Distruttore Base chiamato" << std::endl;
    }
};

class Derivata : public Base {
public:
    Derivata() {
        std::cout << "Costruttore Derivata chiamato" << std::endl;
    }
    ~Derivata() {
        std::cout << "Distruttore Derivata chiamato" << std::endl;
    }
};

int main() {
    Base* ptr = new Derivata();
    delete ptr;
    return 0;
}