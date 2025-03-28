// Creare un programma che utilizza `std::unique_ptr` per gestire la memoria di un oggetto.

#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() {
        std::cout << "Costruttore MyClass" << std::endl;
    }
    ~MyClass() {
        std::cout << "Distruttore MyClass" << std::endl;
    }
    void display() const {
        std::cout << "Metodo display di MyClass" << std::endl;
    }
};

int main() {
    std::unique_ptr<MyClass> ptr = std::make_unique<MyClass>();
    ptr->display();
    return 0;
}