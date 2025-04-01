// Creare una classe che tiene traccia del numero di istanze distrutte usando un attributo statico.

#include <iostream>

class Istanza {
private:
    static int contatore;
public:
    Istanza() {
        contatore++;
    }
    ~Istanza() {
        contatore--;
    }
    static int getNumeroIstanze() {
        return contatore;
    }
};

int Istanza::contatore = 0;

int main() {
    {
        Istanza obj1, obj2;
        std::cout << "Numero di istanze create: " << Istanza::getNumeroIstanze() << std::endl;
    }
    std::cout << "Numero di istanze create dopo distruzione: " << Istanza::getNumeroIstanze() << std::endl;
    return 0;
}