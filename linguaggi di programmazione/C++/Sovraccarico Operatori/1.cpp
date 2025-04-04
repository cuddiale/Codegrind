// Creare una classe `Complex` per rappresentare numeri complessi e sovraccaricare l'operatore `+` per sommare due numeri complessi.

#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Sovraccarico dell'operatore +
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);
    Complex c3 = c1 + c2;
    c3.display(); // 4.0 + 6.0i
    return 0;
}