// Creare una classe con un costruttore di movimento e stampare i valori spostati.

#include <iostream>

class Esempio {
private:
    int* x;
public:
    Esempio(int a) : x(new int(a)) {}
    Esempio(Esempio&& e) noexcept : x(e.x) {
        e.x = nullptr;
        std::cout << "Costruttore di movimento chiamato" << std::endl;
    }
    ~Esempio() {
        delete x;
    }
};

int main() {
    Esempio e1(10);
    Esempio e2 = std::move(e1);
    return 0;
}