// Creare una classe con una funzione amica per sovraccaricare l'operatore di uguaglianza (==).

#include <iostream>

class Complesso {
private:
    double reale, immaginario;
public:
    Complesso(double r, double i) : reale(r), immaginario(i) {}
    friend bool operator==(const Complesso& c1, const Complesso& c2);
};

bool operator==(const Complesso& c1, const Complesso& c2) {
    return (c1.reale == c2.reale) && (c1.immaginario == c2.immaginario);
}

int main() {
    Complesso c1(1.0, 2.0);
    Complesso c2(1.0, 2.0);
    if (c1 == c2) {
        std::cout << "I numeri complessi sono uguali" << std::endl;
    } else {
        std::cout << "I numeri complessi non sono uguali" << std::endl;
    }
    return 0;
}