// Creare una classe template per una frazione con operazioni di somma e sottrazione.

#include <iostream>

template <typename T>
class Frazione {
private:
    T numeratore, denominatore;


public:
    Frazione(T num, T denom) : numeratore(num), denominatore(denom) {}

    Frazione somma(const Frazione& altra) const {
        return Frazione(numeratore * altra.denominatore + altra.numeratore * denominatore,
                        denominatore * altra.denominatore);
    }

    Frazione sottrai(const Frazione& altra) const {
        return Frazione(numeratore * altra.denominatore - altra.numeratore * denominatore,
                        denominatore * altra.denominatore);
    }

    void stampa() const {
        std::cout << numeratore << "/" << denominatore << std::endl;
    }
};

int main() {
    Frazione<int> f1(1, 2);
    Frazione<int> f2(1, 3);
    Frazione<int> somma = f1.somma(f2);
    Frazione<int> differenza = f1.sottrai(f2);

    std::cout << "Somma: ";
    somma.stampa();
    std::cout << "Differenza: ";
    differenza.stampa();
    return 0;
}