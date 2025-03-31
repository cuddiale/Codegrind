// Creare una classe con un distruttore che dealloca un array di oggetti.

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
    AltraClasse* arr;
    int size;
public:
    Esempio(int s) : size(s) {
        arr = new AltraClasse[size];
        std::cout << "Array di AltraClasse allocato" << std::endl;
    }
    ~Esempio() {
        delete[] arr;
        std::cout << "Array di AltraClasse deallocato" << std::endl;
    }
};

int main() {
    Esempio e(5);
    return 0;
}