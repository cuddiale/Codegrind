// Creare due classi base e una classe derivata che eredita da entrambe.

#include <iostream>

class Base1 {
public:
    void funzioneBase1() {
        std::cout << "Funzione della Base1" << std::endl;
    }
};

class Base2 {
public:
    void funzioneBase2() {
        std::cout << "Funzione della Base2" << std::endl;
    }
};

class Derivata : public Base1, public Base2 {
};

int main() {
    Derivata d;
    d.funzioneBase1();
    d.funzioneBase2();
    return 0;
}