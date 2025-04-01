// Creare una classe con un attributo costante statico.

#include <iostream>

class Costante {
public:
    static const int valoreCostante = 100;
};

int main() {
    std::cout << "Valore costante: " << Costante::valoreCostante << std::endl;
    return 0;
}