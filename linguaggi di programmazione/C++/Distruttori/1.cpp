// Creare una classe con un distruttore di default e stampare un messaggio quando viene chiamato.

#include <iostream>

class Esempio {
public:
    Esempio() {
        std::cout << "Costruttore chiamato" << std::endl;
    }
    ~Esempio() {
        std::cout << "Distruttore chiamato" << std::endl;
    }
};

int main() {
    Esempio e;
    return 0;
}