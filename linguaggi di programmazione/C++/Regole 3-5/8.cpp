// Creare una classe che utilizza `std::shared_ptr` per gestire la memoria e implementare la Rule of Five.

#include <iostream>
#include <memory>

class MyClass {
private:
    std::shared_ptr<int> data;
public:
    MyClass(int value) : data(std::make_shared<int>(value)) {}

    MyClass(const MyClass& other) : data(other.data) {
        std::cout << "Costruttore di copia chiamato" << std::endl;
    }

    MyClass& operator=(const MyClass& other) {
        if (this == &other) return *this;
        data = other.data;
        std::cout << "Operatore di assegnazione di copia chiamato" << std::endl;
        return *this;
    }

    MyClass(MyClass&& other) noexcept : data(std::move(other.data)) {
        std::cout << "Costruttore di spostamento chiamato" << std::endl;
    }

    MyClass& operator=(MyClass&& other) noexcept {
        if (this == &other) return *this;
        data = std::move(other.data);
        std::cout << "Operatore di assegnazione di spostamento chiamato" << std::endl;
        return *this;
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
    obj1.print(); // Non stampa nulla, obj1 è stato spostato

    return 0;
}