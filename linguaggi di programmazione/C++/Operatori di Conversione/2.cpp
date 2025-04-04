// Creare una classe che permette la conversione implicita a un tipo base con un operatore di conversione.

#include <iostream>

class MyClass {
private:
    int valore;
public:
    MyClass(int v) : valore(v) {}
    operator int() const {
        return valore;
    }
};

int main() {
    MyClass obj(42);
    int val = obj; // Conversione implicita
    std::cout << "Valore: " << val << std::endl;
    return 0;
}