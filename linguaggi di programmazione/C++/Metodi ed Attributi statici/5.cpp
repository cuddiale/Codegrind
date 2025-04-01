// Creare una classe con un metodo statico che accetta parametri e restituisce un valore.

#include <iostream>

class Matematica {
public:
    static int somma(int a, int b) {
        return a + b;
    }
};

int main() {
    int risultato = Matematica::somma(3, 4);
    std::cout << "Somma: " << risultato << std::endl;
    return 0;
}