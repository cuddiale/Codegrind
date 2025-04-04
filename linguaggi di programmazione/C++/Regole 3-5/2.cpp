// Implementare una copia superficiale e osservare i problemi di gestione della memoria.

#include <iostream>

class MyClass {
private:
    int* data;
public:
    MyClass(int value) : data(new int(value)) {}

    // Costruttore di copia (superficiale)
    MyClass(const MyClass& other) : data(other.data) {
        std::cout << "Costruttore di copia superficiale chiamato" << std::endl;
    }

    // Distruttore
    ~MyClass() {
        delete data;
        std::cout << "Distruttore chiamato" << std::endl;
    }

    void print() const {
        std::cout << "Valore: " << *data << std::endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1; // Costruttore di copia superficiale chiamato
    obj1.print();
    obj2.print();
    return 0;
}