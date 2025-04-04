// Creare una classe che permette la conversione esplicita a un tipo base con un operatore di conversione esplicita.

#include <iostream>

class MyClass {
private:
    int valore;
public:
    MyClass(int v) : valore(v) {}
    explicit operator int() const {
        return valore;
    }
};

int main() {
    MyClass obj(42);
    int val = static_cast<int>(obj); // Conversione esplicita
    std::cout << "Valore: " << val << std::endl;
    return 0;
}