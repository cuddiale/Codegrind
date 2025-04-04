// Sovraccaricare l'operatore `==` per confrontare due numeri complessi nella classe `Complex`.

#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Sovraccarico dell'operatore ==
    bool operator==(const Complex& other) const {
        return real == other.real && imag == other.imag;
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(3.0, 4.0);
    Complex c3(1.0, 2.0);
    std::cout << std::boolalpha;
    std::cout << "c1 == c2: " << (c1 == c2) << std::endl; // true
    std::cout << "c1 == c3: " << (c1 == c3) << std::endl; // false
    return 0;
}