// Creare un programma che converte un `std::unique_ptr` in un `std::shared_ptr`.

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
    std::unique_ptr<MyClass> uniquePtr = std::make_unique<MyClass>();
    std::shared_ptr<MyClass> sharedPtr = std::move(uniquePtr);

    if (!uniquePtr) {
        std::cout << "uniquePtr è nullo" << std::endl;
    }

    sharedPtr->display();
    return 0;
}