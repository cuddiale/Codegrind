// Sovraccaricare l'operatore `=` per assegnare un numero complesso a un altro nella classe `Complex`.

#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Sovraccarico dell'operatore =
    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imag = other.imag;
        }
        return *this;
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2;
    c2 = c1;
    c2.display(); // 3.0 + 4.0i
    return 0;
}