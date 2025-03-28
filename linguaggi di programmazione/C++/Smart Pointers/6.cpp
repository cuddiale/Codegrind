// Creare un programma che utilizza `std::weak_ptr` per controllare se un oggetto esiste ancora.

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
    std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> weak_ptr = ptr;

    if (auto spt = weak_ptr.lock()) { // Controlla se l'oggetto esiste ancora
        spt->display();
    } else {
        std::cout << "L'oggetto non esiste più" << std::endl;
    }

    ptr.reset(); // Dealloca l'oggetto

    if (auto spt = weak_ptr.lock()) {
        spt->display();
    } else {
        std::cout << "L'oggetto non esiste più" << std::endl;
    }

    return 0;
}