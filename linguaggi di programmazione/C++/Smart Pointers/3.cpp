// Creare un programma che utilizza `std::shared_ptr` per gestire la memoria di un oggetto.

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
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    std::shared_ptr<MyClass> ptr2 = ptr1;
    ptr1->display();
    ptr2->display();
    std::cout << "Contatore di riferimenti: " << ptr1.use_count() << std::endl;
    return 0;
}