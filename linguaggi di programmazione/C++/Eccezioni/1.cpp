// Creare una funzione che lancia un'eccezione quando si tenta di dividere per zero.

#include <iostream>
#include <stdexcept>

double dividi(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Divisione per zero");
    }
    return a / b;
}

int main() {
    try {
        std::cout << dividi(10, 2) << std::endl;
        std::cout << dividi(10, 0) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}