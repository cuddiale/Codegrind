// Creare una classe con un distruttore che dealloca oggetti creati dinamicamente nel costruttore.

#include <iostream>

class Esempio {
private:
    AltraClasse* ac;
public:
    Esempio() {
        ac = new AltraClasse();
        std::cout << "Costruttore Esempio chiamato" << std::endl;
    }
    ~Esempio() {
        delete ac;
        std::cout << "Distruttore Esempio chiamato" << std::endl;
    }
};

int main() {
    Esempio e;
    return 0;
}