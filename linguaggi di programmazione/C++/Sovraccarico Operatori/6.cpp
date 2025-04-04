// Sovraccaricare l'operatore `>>` per leggere i dati di un oggetto `Complex` dallo stream di input.

#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Sovraccarico dell'operatore >>
    friend std::istream& operator>>(std::istream& is, Complex& c) {
        is >> c.real >> c.imag;
        return is;
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c;
    std::cout << "Inserisci un numero complesso (reale e immaginario): ";
    std::cin >> c;
    c.display();
    return 0;
}