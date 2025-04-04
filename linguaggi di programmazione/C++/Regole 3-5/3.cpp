// Creare una classe con costruttore di copia, operatore di assegnazione di copia, costruttore di spostamento, operatore di assegnazione di spostamento e distruttore.

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

    // Costruttore di spostamento
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Costruttore di spostamento chiamato" << std::endl;
    }

    // Operatore di assegnazione di spostamento
    MyClass& operator=(MyClass&& other) noexcept {
        if (this == &other) return *this;
        delete data;
        data = other.data;
        other.data = nullptr;
        std::cout << "Operatore di assegnazione di spostamento chiamato" << std::endl;
        return *this;
    }

    // Distruttore
    ~MyClass() {
        delete data;
        std::cout << "Distruttore chiamato" << std::endl;
    }

    void print() const {
        if (data)
            std::cout << "Valore: " << *data << std::endl;
        else
            std::cout << "Nessun dato" << std::endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = std::move(obj1); // Costruttore di spostamento chiamato
    obj2.print();
    obj1.print();
    return 0;
}