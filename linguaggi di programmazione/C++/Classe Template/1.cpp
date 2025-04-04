// Creare una classe template semplice per memorizzare un valore e stamparlo.

#include <iostream>

template <typename T>
class Contenitore {
private:
    T valore;
public:
    Contenitore(T v) : valore(v) {}
    void stampa() {
        std::cout << "Valore: " << valore << std::endl;
    }
};

int main() {
    Contenitore<int> c1(42);
    Contenitore<std::string> c2("Ciao");
    c1.stampa();
    c2.stampa();
    return 0;
}