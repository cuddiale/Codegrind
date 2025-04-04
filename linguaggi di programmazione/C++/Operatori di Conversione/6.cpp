// Creare una classe che permette la conversione a un puntatore con un operatore di conversione.

#include <iostream>

class MyClass {
private:
    int valore;
public:
    MyClass(int v) : valore(v) {}
    operator int*() {
        return &valore;
    }
};

int main() {
    MyClass obj(42);
    int* ptr = obj; // Conversione implicita
    std::cout << "Valore puntato: " << *ptr << std::endl;
    return 0;
}