// Definire funzioni sovraccariche in un namespace e chiamarle nel programma.

#include <iostream>

namespace MathOperations {
    int somma(int a, int b) {
        return a + b;
    }

    double somma(double a, double b) {
        return a + b;
    }
}

int main() {
    std::cout << "Somma di interi: " << MathOperations::somma(3, 4) << std::endl;
    std::cout << "Somma di double: " << MathOperations::somma(2.5, 3.5) << std::endl;
    return 0;
}