// Creare una classe che permette la conversione a un tipo personalizzato con un operatore di conversione.

#include <iostream>

class CustomType {
private:
    int valore;
public:
    CustomType(int v) : valore(v) {}
    void stampa() const {
        std::cout << "CustomType Valore: " << valore << std::endl;
    }
};

class MyClass {
private:
    int valore;
public:
    MyClass(int v) : valore(v) {}
    operator CustomType() const {
        return CustomType(valore);
    }
};

int main() {
    MyClass obj(42);
    CustomType ct = obj; // Conversione implicita
    ct.stampa();
    return 0;
}