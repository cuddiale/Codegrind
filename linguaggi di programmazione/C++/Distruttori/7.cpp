// Creare una classe con un distruttore che gestisce la deallocazione di oggetti di altre classi.

#include <iostream>

class AltraClasse {
public:
    AltraClasse() {
        std::cout << "Costruttore AltraClasse chiamato" << std::endl;
    }
    ~AltraClasse() {
        std::cout << "Distruttore AltraClasse chiamato" << std::endl;
    }
};

class Esempio {
private:
    AltraClasse ac;
public:
    Esempio() {
        std::cout << "Costruttore Esempio chiamato" << std::endl;
    }
    ~Esempio() {
        std::cout << "Distruttore Esempio chiamato" << std::endl;
    }
};

int main() {
    Esempio e;
    return 0;
}