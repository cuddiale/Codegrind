// Creare una classe con costruttore di copia, operatore di assegnazione di copia e distruttore.

#include <iostream>

class MyClass {
private:
    int* data;
public:
    // Costruttore
    MyClass(int value) : data(new int(value)) {}

    // Costruttore di copia
    MyClass(const MyClass& other) : data(new int(*other.data)) {
        std::cout << "Costruttore di copia chiamato" << std::endl;
    }

    // Operatore di assegnazione di copia
    MyClass& operator=(const MyClass& other) {
        if (this == &other) return *this;
        *data = *other.data;
        std::cout << "Operatore di assegnazione di copia chiamato" << std::endl;
        return *this;
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
    MyClass obj2 = obj1; // Costruttore di copia chiamato
    obj2 = obj1;         // Operatore di assegnazione di copia chiamato
    obj1.print();
    obj2.print();
    return 0;
}