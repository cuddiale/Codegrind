// Gestire i costruttori nelle classi base e derivata usando l'ereditarietà multipla.

#include <iostream>

class Base1 {
public:
    Base1() {
        std::cout << "Costruttore della Base1" << std::endl;
    }
};

class Base2 {
public:
    Base2() {
        std::cout << "Costruttore della Base2" << std::endl;
    }
};

class Derivata : public Base1, public Base2 {
public:
    Derivata() {
        std::cout << "Costruttore della Derivata" << std::endl;
    }
};

int main() {
    Derivata d;
    return 0;
}