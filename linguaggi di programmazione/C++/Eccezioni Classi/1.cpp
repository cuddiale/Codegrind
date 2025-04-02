// Creare una classe che lancia un'eccezione quando si tenta di dividere per zero.

#include <iostream>
#include <stdexcept>

class Divisore {
public:
    double dividi(double a, double b) {
        if (b == 0) {
            throw std::runtime_error("Divisione per zero");
        }
        return a / b;
    }
};

int main() {
    Divisore d;
    try {
        std::cout << d.dividi(10, 2) << std::endl;
        std::cout << d.dividi(10, 0) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}