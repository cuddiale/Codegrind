// Creare una classe con un attributo statico condiviso tra tutte le istanze della classe.

#include <iostream>

class Condiviso {
public:
    static int valoreCondiviso;
    void incrementa() {
        valoreCondiviso++;
    }
};

int Condiviso::valoreCondiviso = 0;

int main() {
    Condiviso obj1, obj2;
    obj1.incrementa();
    obj2.incrementa();
    std::cout << "Valore condiviso: " << Condiviso::valoreCondiviso << std::endl;
    return 0;
}