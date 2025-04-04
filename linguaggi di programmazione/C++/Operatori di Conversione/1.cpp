// Creare una classe che permette la conversione implicita da un tipo base con un costruttore.

#include <iostream>

class MyClass {
private:
    int valore;
public:
    MyClass(int v) : valore(v) {}
    void stampa() const {
        std::cout << "Valore: " << valore << std::endl;
    }
};

int main() {
    MyClass obj = 42; // Conversione implicita
    obj.stampa();
    return 0;
}