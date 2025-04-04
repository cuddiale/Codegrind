// Sovraccaricare l'operatore `<<` per scrivere i dati di un oggetto `Complex` sullo stream di output.

#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Sovraccarico dell'operatore <<
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};

int main() {
    Complex c(3.0, 4.0);
    std::cout << "Il numero complesso è: " << c << std::endl;
    return 0;
}