// Gestire i distruttori nelle classi base e derivata usando l'ereditarietà multipla.

#include <iostream>

class Base1 {
public:
    ~Base1() {
        std::cout << "Distruttore della Base1" << std::endl;
    }
};

class Base2 {
public:
    ~Base2() {
        std::cout << "Distruttore della Base2" << std::endl;
    }
};

class Derivata : public Base1, public Base2 {
public:
    ~Derivata() {
        std::cout << "Distruttore della Derivata" << std::endl;
    }
};

int main() {
    Derivata d;
    return 0;
}