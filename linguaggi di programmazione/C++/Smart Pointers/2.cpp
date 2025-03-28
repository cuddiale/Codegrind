// Creare un programma che trasferisce la proprietà di un oggetto gestito da `std::unique_ptr` a un altro `std::unique_ptr`.

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
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();
    ptr1->display();
    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
    if (!ptr1) {
        std::cout << "ptr1 è nullo" << std::endl;
    }
    ptr2->display();
    return 0;
}