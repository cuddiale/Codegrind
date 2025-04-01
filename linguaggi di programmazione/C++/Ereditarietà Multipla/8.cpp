// Usare l'ereditarietà virtuale per evitare il problema del diamante.

#include <iostream>

class Base {
public:
    void funzione() {
        std::cout << "Funzione della Base" << std::endl;
    }
};

class Derivata1 : virtual public Base {
};

class Derivata2 : virtual public Base {
};

class DerivataFinale : public Derivata1, public Derivata2 {
};

int main() {
    DerivataFinale df;
    df.funzione();
    return 0;
}