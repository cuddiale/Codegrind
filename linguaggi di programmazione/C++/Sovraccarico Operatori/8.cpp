// Sovraccaricare l'operatore `++` per incrementare il valore di un oggetto `Counter`.

#include <iostream>

class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}

    // Sovraccarico dell'operatore ++ (pre-incremento)
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Sovraccarico dell'operatore ++ (post-incremento)
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    void display() const {
        std::cout << "Valore: " << value << std::endl;
    }
};

int main() {
    Counter c(5);
    ++c;
    c.display(); // 6
    c++;
    c.display(); // 7
    return 0;
}