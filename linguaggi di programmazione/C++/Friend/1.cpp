// Creare una classe con una funzione amica che accede ai membri privati.

#include <iostream>

class MyClass {
private:
    int valore;
public:
    MyClass(int v) : valore(v) {}
    friend void stampaValore(const MyClass& obj);
};

void stampaValore(const MyClass& obj) {
    std::cout << "Valore: " << obj.valore << std::endl;
}

int main() {
    MyClass obj(42);
    stampaValore(obj);
    return 0;
}