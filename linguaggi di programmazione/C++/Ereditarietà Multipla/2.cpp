// Gestire il conflitto di nomi tra due classi base usando l'ereditarietà multipla.

#include <iostream>

class Base1 {
public:
    void funzione() {
        std::cout << "Funzione della Base1" << std::endl;
    }
};

class Base2 {
public:
    void funzione() {
        std::cout << "Funzione della Base2" << std::endl;
    }
};

class Derivata : public Base1, public Base2 {
public:
    void funzioneDerivata() {
        Base1::funzione();
        Base2::funzione();
    }
};

int main() {
    Derivata d;
    d.funzioneDerivata();
    return 0;
}