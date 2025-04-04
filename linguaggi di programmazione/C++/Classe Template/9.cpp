// Creare una classe template per un intervallo (range) con operazioni di inclusione ed esclusione.

#include <iostream>

template <typename T>
class Intervallo {
private:
    T inizio, fine;
public:
    Intervallo(T i, T f) : inizio(i), fine(f) {}
    bool include(const T& val) const {
        return val >= inizio && val <= fine;
    }
    bool escludi(const T& val) const {
        return val < inizio || val > fine;
    }
};

int main() {
    Intervallo<int> intervallo(10, 20);
    int val1 = 15, val2 = 25;
    std::cout << "Il valore " << val1 << " è incluso? " << (intervallo.include(val1) ? "Sì" : "No") << std::endl;
    std::cout << "Il valore " << val2 << " è escluso? " << (intervallo.escludi(val2) ? "Sì" : "No") << std::endl;
    return 0;
}